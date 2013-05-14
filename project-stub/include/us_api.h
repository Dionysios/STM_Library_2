#ifndef US_API_H
#define US_API_H

/***
API functions
**/

/** All the setup will be done in this method.
**/
void start_us();

/** When called this function, a fixed width unsigned integer of 2 bytes will be returned with latest data from device.
    P.S: If new data is not available, previous data will be returned. This approach might help when reading happens faster than sensor refresh rate aka frequency.
**/
uint16_t read_us();

/*
 * Internal Functions
 * 
 */


#endif // US_API_H
