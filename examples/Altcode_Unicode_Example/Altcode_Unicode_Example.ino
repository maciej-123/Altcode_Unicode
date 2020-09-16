//alt code_unicode tester - Maciej Zajaczkowski, copyright 2020 ©

//WARNING: please ensure that unicodeinput.exe is open. Functions automatically set numlock position.
//otherwise may behave unpredictably. Also lease note that UNICODE Alt+X only takes up to 4 digit hex codes and
//only works in some applications such as Microsoft Word and not google chrome.

#include "Keyboard.h"
#include <Altcode_Unicode_lib.h>

const int pinLed = LED_BUILTIN;
const int master = 9;
int button1 = 2;
int button2 = 3;
int button3 = 4;
int button4 = 5;

void setup() {
  pinMode(pinLed, OUTPUT);
  pinMode(master, INPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(button4, INPUT);

  Serial.begin(9600);
  Keyboard.begin();
}

void loop() {

    //IMPORTANT: pin 9 used to control keyboard ON/OFF. 
  if (digitalRead(master)) {

    if(digitalRead(button1) == HIGH)
    {
      //insert alt code
      //put -1 for omission of number
      //alt_code(-1,2,1,9);
      //Unicode_Alt_X("2ef3");
      Unicode_Alt_Plus("2ef3"); //chinese
    }
    if(digitalRead(button2) == HIGH)
    {
      //insert alt code
      //put -1 for omission of number      
      //alt_code(-1,1,7,8); 
      //Unicode_Alt_X("2230");
      Unicode_Alt_Plus("2230"); //mathematics
    }
    if(digitalRead(button3) == HIGH)
    {
      //insert alt code
      //put -1 for omission of number
      //alt_code(-1,1,7,7);
      //Unicode_Alt_X("26a1");
      Unicode_Alt_Plus("26d0");  //emoji
    }
    if(digitalRead(button4) == HIGH)
    {
      //put -1 for omission of number
      //Unicode_Alt_X("26a1"); 
      //alt_code(-1,1,7,6);  
      //only Unicode Alt + can take 5 digit codes
      Unicode_Alt_Plus("1203B"); //cuneiform
      //this may not display on some applications but it should in chrome     
      
    }
    delay(50);

  }
}
