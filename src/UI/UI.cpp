#include "UI.h"
#include <cstdint>
#include <cstdio>

UI::UI(uint32_t screen_width, uint32_t screen_height){
    this->screen_width = screen_width;
    this->screen_height = screen_height;
}

void UI::setBackgroundColor(uint32_t color){
    //lcd.Clear(color);
    lcd.SetBackColor(color);
}

void UI::clear(uint32_t color){
    lcd.Clear(color);
}

void UI::drawDialog(uint32_t xPos, uint32_t yPos, uint8_t *title, uint8_t *msg){
    drawWindowBar(xPos, yPos, 230, title);
    lcd.DrawRect(xPos, yPos+20, 230, 200);
    //lcd.DisplayStringAt(xPos + 8, yPos+23, msg, LEFT_MODE);
    int line = 0;

    for(int i = 0; i < 35; i++){
        if(xPos + 5 + i * 3 > 220){
            printf("Current xPos: %d\n", xPos + 5 + i * 3);
            line++;
            xPos = 10;
        }
        lcd.DisplayChar(xPos + 5 + (i * 11), yPos + 23 + (line * 51), msg[i]);
    }
}

void UI::drawWindowBar(uint32_t xPos, uint32_t yPos, uint32_t width, uint8_t *title){
    lcd.SetTextColor(LCD_COLOR_YELLOW);
    lcd.DrawRect(xPos, yPos, width, 20);

    lcd.DisplayStringAt(xPos + 3, yPos + 3, title, CENTER_MODE);
    lcd.DisplayChar(width - 13, yPos+3, 'x');
    lcd.DrawRect(width - 15, yPos + 3, 15, 13);
    
}