#include "menu.h"

char retVal;

void mostrarMenu(){
    ssd1306_Fill(Black);
    ssd1306_FillRectangle(0, 0, 127, 15, White);  
    ssd1306_SetCursor(5, 5);
    retVal = ssd1306_WriteString("Menu Principal", Font_6x8, Black);
    ssd1306_DrawRectangle(0, 16, 127, 31, White);      // Retângulo 1
    ssd1306_FillRectangle(2, 18, 125, 29, White);
    ssd1306_FillRectangle(2, 34, 125, 45, White);
    ssd1306_FillRectangle(2, 50, 125, 61, White);

    ssd1306_SetCursor(4, 20);
    retVal = ssd1306_WriteString("Acelerometro", Font_6x8, Black);
  
    ssd1306_SetCursor(4, 36);
    retVal = ssd1306_WriteString("Giroscopio", Font_6x8, Black);

    ssd1306_SetCursor(4, 52);
    retVal = ssd1306_WriteString("Temperatura", Font_6x8, Black);
    
    ssd1306_UpdateScreen();
  }


    //ssd1306_DrawRectangle(0, 0, 127, 15, White);      // Retângulo 1
    //ssd1306_DrawRectangle(0, 16, 127, 31, White);     // Retângulo 2
    //ssd1306_DrawRectangle(0, 32, 127, 47, White);     // Retângulo 3
    //ssd1306_DrawRectangle(0, 48, 127, 63, White);     // Retângulo 4
