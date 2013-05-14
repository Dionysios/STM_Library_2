#include "stdlib.h"
#include "ch.h"
#include "hal.h"
#include "motor.h"

int steeringMotor; //1265 mapping require 
int speedMotor; // min 1490 max over 2000 for forward movement.
int drive_pulse = 1400; //initalizing width of the pulse


static PWMConfig pwmcfg = {
  1000000, /* 1MHz PWM clock frequency */
  20000, /* PWM period 20 milli second */
  NULL, /* No callback */
  /* Only channel 3 enabled */
  {
    {PWM_OUTPUT_ACTIVE_HIGH, NULL},
    {PWM_OUTPUT_ACTIVE_HIGH, NULL},
    {PWM_OUTPUT_ACTIVE_HIGH, NULL},
    {PWM_OUTPUT_ACTIVE_HIGH, NULL}
  },
  0
};

static WORKING_AREA(waThread3, 128);
static msg_t Thread3(void *arg) {
  chThdSleepMilliseconds(5000);  
  (void)arg;

  chRegSetThreadName("motorthread");

  while (TRUE) {
    pwmEnableChannel(&PWMD3, 2, speedMotor);
  }
  return (msg_t)0;
}

static WORKING_AREA(waThread4, 128);
static msg_t Thread4(void *arg) {
 // chThdSleepMilliseconds(2000);
  //steering motor
  (void)arg;
  chRegSetThreadName("steeringthread");
  enum {UP, DOWN};
  int dir = UP, step = 2, width = 1100 , center =1500;
  while (TRUE) {
    pwmEnableChannel(&PWMD3, 3, steeringMotor);

    width += 100;
    chThdSleepMilliseconds(5000);

  }
  return (msg_t)0;
}
	
void motorInit(void) {

	//Pin selection PC8 PC9	
  palSetPadMode(GPIOC, 8, PAL_MODE_ALTERNATE(2));
  palSetPadMode(GPIOC, 9, PAL_MODE_ALTERNATE(2));//650


  // hardware confg
  pwmStart(&PWMD3, &pwmcfg);
  //drive motor enable
  pwmEnableChannel(&PWMD3, 2, drive_pulse);
 
  //wait until it enables drive motor
  chThdSleepMilliseconds(500);
  //start threed

  chThdCreateStatic(waThread3, sizeof(waThread3),NORMALPRIO + 10, Thread3, NULL);
  chThdCreateStatic(waThread4, sizeof(waThread4),NORMALPRIO + 10, Thread4, NULL);

}  

void setMotorData(int steer, int speed){

   steeringMotor = steer;
   speedMotor = speed;  		
}
