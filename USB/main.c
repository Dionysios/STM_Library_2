#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "ch.h"
#include "hal.h"

#include "shell.h"
#include "chprintf.h"


//#include "USB.h"

#include "usbdescriptor.h"

/*
 * Application entry point.
 */
int main(void) {

  /*
   * System initializations.
   * - HAL initialization, this also initializes the configured device drivers
   *   and performs the board-specific initializations.
   * - Kernel initialization, the main() function becomes a thread and the
   *   RTOS is active.
   */
  halInit();
  chSysInit();


  /*
   * Activates the USB driver and then the USB bus pull-up on D+.
   */
    myUSBinit();



  /* BaseSequentialStream *chp =   (BaseSequentialStream *)&SDU1; */
  uint16_t i;
  for(i=0;i<sizeof transferBuf;i++)
    transferBuf[i] = i;
  /* transferBuf[0] = 0; //1,2,3,4,5,6,7,8,9}; */
 

  /*
   * Main loop, does nothing except spawn a shell when the old one was terminated
   */
  while (TRUE) {
    if (initUSB)
      {
	//       uint8_t i = receive_data();
	//chprintf(chp,"Got %d \n", i);
	send_data();
	//chprintf(chp,"sent data \n");
      }
    chThdSleepMilliseconds(1000);
  }
}
