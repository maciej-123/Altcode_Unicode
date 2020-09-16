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
   //check num lock - if OFF then switch ON
   if (BootKeyboard.getLeds() & LED_NUM_LOCK)
   {
     Keyboard.press(KEY_NUM_LOCK);
     Keyboard.releaseAll();
   }
  
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(HID_KEYPAD_ADD);
  Keyboard.press(KEY_BACKSPACE);
  delay(10);
  Keyboard.releaseAll();
  Keyboard.print(code);  
  Keyboard.press(KEY_RETURN);
  
  delay(100);
  Keyboard.releaseAll();
}


void alt_code(int num1, int num2, int num3, int num4)
{
   //switch on num lock
   if (BootKeyboard.getLeds() & LED_NUM_LOCK)
   {
     Keyboard.press(KEY_NUM_LOCK);
     Keyboard.releaseAll();
   }

  Keyboard.press(KEY_LEFT_ALT);
  Keypad_press(num1);
  Keypad_press(num2);
  Keypad_press(num3);
  Keypad_press(num4);
  Keyboard.releaseAll();
  delay(100);
}

void Keypad_press(int num)
{
  if(num == 0)
  { 
  Keyboard.press(KEYPAD_0); 
  Keyboard.release(KEYPAD_0); 
  delay(50); 
  }
  else if(num == 1)
  {
  Keyboard.press(KEYPAD_1); 
  Keyboard.release(KEYPAD_1); 
  delay(50); 
  }
  else if(num == 2)
  {
  Keyboard.press(KEYPAD_2); 
  Keyboard.release(KEYPAD_2); 
  delay(50); 
  }
  else if(num == 3)
  {
  Keyboard.press(KEYPAD_3); 
  Keyboard.release(KEYPAD_3); 
  delay(50); 
  }
  else if(num == 4)
  {
  Keyboard.press(KEYPAD_4); 
  Keyboard.release(KEYPAD_4); 
  delay(50); 
  }
  else if(num == 5)
  {
  Keyboard.press(KEYPAD_5); 
  Keyboard.release(KEYPAD_5); 
  delay(50); 
  }
  else if(num == 6)
  {
  Keyboard.press(KEYPAD_6); 
  Keyboard.release(KEYPAD_6); 
  delay(50); 
  }
  else if(num == 7)
  {
  Keyboard.press(KEYPAD_7); 
  Keyboard.release(KEYPAD_7); 
  delay(50); 
  }
  else if(num == 8)
  {
  Keyboard.press(KEYPAD_8); 
  Keyboard.release(KEYPAD_8); 
  delay(50); 
  }
  else if(num == 9)
  {
  Keyboard.press(KEYPAD_9); 
  Keyboard.release(KEYPAD_9); 
  delay(50); 
  }  
}
