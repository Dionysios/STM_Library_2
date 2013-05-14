/* Control a servo connected to PB8 */
 
/* 
 * STM32F40x includes 4 general purpose timers: TIM2, TIM3, TIM4, TIM5 
 * TIM3 and TIM4 are 16 bit timers with PWM support.
 *
 * PWMD4 is a HAL defined variable of type PWMDriver - it is associated with
 * TIM4.
 */
 
 
#include "ch.h"
#include "hal.h"
 
#define SERVO 8
 
static PWMConfig pwmcfg = {
  1000000, /* 1MHz PWM clock frequency */
  20000, /* PWM period 20 milli  second */
  NULL,  /* No callback */
  /* Only channel 3 enabled */
  {
    {PWM_OUTPUT_DISABLED, NULL},
    {PWM_OUTPUT_DISABLED, NULL},
    {PWM_OUTPUT_ACTIVE_HIGH, NULL},
    {PWM_OUTPUT_DISABLED, NULL},
  },
  0
};
  
 
int main(void) {
  enum {UP, DOWN};
  static int dir = UP, step = 50, width = 700; /* starts at .7ms, ends at 2.0ms */
 
  halInit();
  chSysInit();
 
  /* Enables PWM output (of TIM4, channel 3) on servo connected to PB8 */  
  palSetPadMode(GPIOB, SERVO, PAL_MODE_ALTERNATE(2));
 
  pwmStart(&PWMD4, &pwmcfg);
 
  while (TRUE) {
    pwmEnableChannel(&PWMD4, 2, width);
    if(width == 700) dir = UP;
    else if (width == 2000) dir = DOWN;
    if (dir == UP) width += step;
    else if (dir == DOWN) width -= step;
  
    chThdSleepMilliseconds(100);
  }
}
