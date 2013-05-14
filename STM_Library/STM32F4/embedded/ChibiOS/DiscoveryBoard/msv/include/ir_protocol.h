#ifndef IR_PROTOCOL
#define IR_PROTOCOL


#include "ch.h"
#include "hal.h"

#include "shell.h"
#include "chprintf.h"

#include "PWM/PWM.h"
#include "ADC/ADC.h"
#include "USB/USB.h"
#include "Misc/Misc.h"
#include "SPI/SPI.h"

void print(BaseSequentialStream *chp, int argc, char *argv[]);

#endif // ADC_H_INCLUDED
