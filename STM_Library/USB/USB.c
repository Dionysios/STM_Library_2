#include "ch.h"
#include "hal.h"
#include "usb_cdc.h"
#include "shell.h"

#include "USB.h"
#include "usbdescriptor.h"

#include "chstreams.h"



/*
 * USB Driver structure.
 */

/* uint8_t receiveBuf[OUT_PACKETSIZE]; */
/* #define IN_MULT 4 */
/* uint8_t transferBuf[IN_PACKETSIZE*IN_MULT]; */

/* USBDriver *  	usbp = &USBD1; */
/* uint8_t initUSB=0; */
/* uint8_t usbStatus = 0; */

//SerialUSBDriver SDU1;
/*
 * data Transmitted Callback
 */
void dataTransmitted(USBDriver *usbp, usbep_t ep){
    (void) usbp;
    (void) ep;

    // exit on USB reset
    if(!usbStatus) return;


    usbPrepareTransmit(usbp, EP_IN, transferBuf, sizeof transferBuf);

    chSysLockFromIsr();
    usbStartTransmitI(usbp, EP_IN);
    chSysUnlockFromIsr();

}

bool_t requestsHook(USBDriver *usbp) {
    (void) usbp;
    return FALSE;
}

/**
 * @brief   IN EP1 state.
 */
static USBInEndpointState ep1instate;

/**
 * @brief   EP1 initialization structure (IN only).
 */
static const USBEndpointConfig ep1config = {
  USB_EP_MODE_TYPE_BULK,    //Type and mode of the endpoint
  NULL,                     //Setup packet notification callback (NULL for non-control EPs)
  dataTransmitted,          //IN endpoint notification callback
  NULL,                     //OUT endpoint notification callback
  IN_PACKETSIZE,            //IN endpoint maximum packet size
  0x0000,                   //OUT endpoint maximum packet size
  &ep1instate,              //USBEndpointState associated to the IN endpoint
  NULL,                     //USBEndpointState associated to the OUTendpoint
  IN_MULT,
  NULL                      //Pointer to a buffer for setup packets (NULL for non-control EPs)
};

/*
 * data Received Callback
 * It prints to shell a string
 */
void dataReceived(USBDriver *usbp, usbep_t ep){
    USBOutEndpointState *osp = usbp->epc[ep]->out_state;
    (void) usbp;
    (void) ep;
    // exit on USB reset
    if(!usbStatus) return;

   if(osp->rxcnt){
     //  chprintf(chp,"Data received");
    }

    /*
     * Initiate next receive
     */
    usbPrepareReceive(usbp, EP_OUT, receiveBuf, 64);

    chSysLockFromIsr();
    usbStartReceiveI(usbp, EP_OUT);
    chSysUnlockFromIsr();
}

/**
 * @brief   OUT EP2 state.
 */
USBOutEndpointState ep2outstate;

/**
 * @brief   EP2 initialization structure (OUT only).
 */
static const USBEndpointConfig ep2config = {
  USB_EP_MODE_TYPE_BULK,
  NULL,
  NULL,
  dataReceived,
  0x0000,
  OUT_PACKETSIZE,
  NULL,
  &ep2outstate,
  1,
  NULL
};


/*
 * Handles the USB driver global events.
 */
static void usb_event(USBDriver *usbp, usbevent_t event) {
  (void) usbp;
  switch (event) {
  case USB_EVENT_RESET:
    //with usbStatus==0 no new transfers will be initiated
    usbStatus = 0;
    return;
  case USB_EVENT_ADDRESS:
    return;
  case USB_EVENT_CONFIGURED:

    /* Enables the endpoints specified into the configuration.
       Note, this callback is invoked from an ISR so I-Class functions
       must be used.*/
    chSysLockFromIsr();
    usbInitEndpointI(usbp, 1, &ep1config);
    usbInitEndpointI(usbp, 2, &ep2config);
    chSysUnlockFromIsr();
    //allow the main thread to init the transfers
    initUSB =1;
    return;
  case USB_EVENT_SUSPEND:
    return;
  case USB_EVENT_WAKEUP:
    return;
  case USB_EVENT_STALLED:
    return;
  }
  return;
}

/*
 * Returns the USB descriptors defined in usbdescriptor.h
 */
static const USBDescriptor *get_descriptor(USBDriver *usbp,
                                           uint8_t dtype,
                                           uint8_t dindex,
                                           uint16_t lang) {

  (void)usbp;
  (void)lang;

  switch (dtype) {
  case USB_DESCRIPTOR_DEVICE:
    return &vcom_device_descriptor;
  case USB_DESCRIPTOR_CONFIGURATION:
    return &vcom_configuration_descriptor;
  case USB_DESCRIPTOR_STRING:
    if (dindex < 4){
      return &vcom_strings[dindex];
      }
      else{
          return &vcom_strings[4];
      }
  }
  return NULL;
}

/*
 * USBconfig
 */
const USBConfig   	config =   {
    usb_event,
    get_descriptor,
    requestsHook,
    NULL
  };




// halInit() and chSysInit() should be called from user class, before initiating usb (before using this functions)
void myUSBinit(void){

  /*
   * Shell manager initialization.
   */
  shellInit();
  /*
   * Activates the USB driver and then the USB bus pull-up on D+.
   * Note, a delay is inserted in order to not have to disconnect the cable
   * after a reset.
   */

  //Start and Connect USB
  usbDisconnectBus(usbp);
  chThdSleepMilliseconds(1000);
  usbStart(usbp, &config);
  usbConnectBus(usbp);

}


void send_data(){
  usbStatus=1;  
  if(initUSB){ 
    usbPrepareTransmit(usbp, EP_IN, transferBuf, sizeof transferBuf);
    chSysLock();
    usbStartTransmitI(usbp, EP_IN);
    chSysUnlock();
    /* chSequentialStreamWrite(&SDU1, buf, sizeof buf - 1); */
  }
  initUSB=0;
  // else failed
}

uint8_t receive_data(){
  // while EP_BUSY 
  usbStatus=1;
  if(initUSB){
    usbPrepareReceive(usbp, EP_OUT, receiveBuf, 64);
    chSysLock();
    usbStartReceiveI(usbp, EP_OUT);
    chSysUnlock(); 
    
  }
  initUSB=0;
  return 0;
}
