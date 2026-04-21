#include "menu.h"

char retVal;
char titleMenu[] = "Main Menu";
char option1[] = "1. Option 1";
char option2[] = "2. Option 2";
char option3[] = "3. Option 3";
bool flagMenu = true;

void menuUpdate(uint8_t option){
    ssd1306_Fill(Black);

    // Desenho dos retângulos para as opções do menu
    ssd1306_FillRectangle(0, 0, 127, 15, White);  
    ssd1306_FillRectangle(2, 18, 125, 29, White);
    ssd1306_FillRectangle(2, 34, 125, 45, White);
    ssd1306_FillRectangle(2, 50, 125, 61, White);

    // Texto do menu
    ssd1306_SetCursor(5, 5);
    retVal = ssd1306_WriteString(titleMenu, Font_6x8, Black);
    ssd1306_SetCursor(4, 20);
    retVal = ssd1306_WriteString(option1, Font_6x8, Black);
    ssd1306_SetCursor(4, 36);
    retVal = ssd1306_WriteString(option2, Font_6x8, Black);
    ssd1306_SetCursor(4, 52);
    retVal = ssd1306_WriteString(option3, Font_6x8, Black);


    // Desenho do retângulo para destacar a opção selecionada
    if(flagMenu) 
    {
      switch (option)
      {
      case 1:
        ssd1306_DrawRectangle(0, 16, 127, 31, White);      // Option 1
        break;
      case 2:
        ssd1306_DrawRectangle(0, 32, 127, 47, White);     // Option 2
        break;
      case 3:
        ssd1306_DrawRectangle(0, 48, 127, 63, White);     // Option 3
        break;
      
      default:
        break;
      }
    }

    ssd1306_UpdateScreen();

  }
