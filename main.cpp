/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include "LCD_DISCO_F429ZI.h"
#include "UI.h"

#include <cstdint>
#include <cstdio>
#include <cstring>
#include <string>


// Blinking rate in milliseconds
#define BLINKING_RATE     500ms

UI ui(320, 240);

int main()
{
    ui.clear(LCD_COLOR_BLUE);
    ui.setBackgroundColor(LCD_COLOR_BLUE);
    ui.drawDialog(5, 5, (uint8_t *) "Welcome!", (uint8_t *) "This is a test. I don't know much tho");
    

    while (true) {
        
        


        ThisThread::sleep_for(BLINKING_RATE);
    }
}
