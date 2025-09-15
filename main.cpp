/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "InterfaceDigitalOut.h"
#include "mbed.h"
#include <cstdint>
#include <stdint.h>
#include <stdbool.h>

// Blinking rate in milliseconds
#define BLINKING_RATE     50ms
#define PB PB9

int main()
{
// Initialise the digital pin LED1 as an output
#ifdef LED1
    DigitalOut led1(LED1);
#else
    bool led1;
#endif

#ifdef LED2
    DigitalOut led2(LED2);
#else
    bool led2;
#endif
    
#ifdef PB
    DigitalIn  pb_press(BUTTON1);
#else
    bool pb_press;
#endif

    while (true) {
        if (pb_press) {
            led1 = true;
        }
        else {
            led1 = false;
        }
    }

}




