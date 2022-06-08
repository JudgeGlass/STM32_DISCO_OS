#ifndef UI_H
#define UI_H

#include "mbed.h"
#include "LCD_DISCO_F429ZI.h"

class UI{
    public:
        UI(uint32_t screen_width, uint32_t screen_height);

        void setBackgroundColor(uint32_t color);
        void clear(uint32_t color);
        void drawDialog(uint32_t xPos, uint32_t yPos, uint8_t *title, uint8_t *msg);
        void drawWindowBar(uint32_t xPos, uint32_t yPos, uint32_t width, uint8_t *title);

        LCD_DISCO_F429ZI lcd;
    private:
        uint32_t screen_width; // 320px
        uint32_t screen_height; // 240px

        


};

#endif