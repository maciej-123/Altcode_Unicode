#include "Altcode_Unicode_lib.h"

void Unicode_Alt_X(String code)
{
  Keyboard.print(code);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('x');
  Keyboard.releaseAll();
  delay(100);
}

void Unicode_Alt_Plus(String code)
{
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(223);
  Keyboard.press(KEY_BACKSPACE);
  delay(10);
  Keyboard.releaseAll();
  Keyboard.print(code);  
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(100);
}


void alt_code(int num1, int num2, int num3, int num4)
{

  if (num1 == 0){num1+=10;}
  if (num2 == 0){num2+=10;}
  if (num3 == 0){num3+=10;}
  if (num4 == 0){num4+=10;}
    
  //add 0xE0
  num1 += 224;
  num2 += 224;
  num3 += 224;
  num4 += 224;

  Serial.println(num1);
  Serial.println(num2);
  Serial.println(num3);
  Serial.println(num4);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(num1); 
  delay(50); 
  Keyboard.release(num1);      
  Keyboard.press(num2); 
  delay(50); 
  Keyboard.release(num2); 
  Keyboard.press(num3); 
  delay(50); 
  Keyboard.release(num3); 
  Keyboard.press(num4); 
  delay(50); 
  Keyboard.release(num4);
  Keyboard.releaseAll();
  delay(100);
}
