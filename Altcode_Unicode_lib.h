#ifndef ALTCODE_UNICODE_LIB_H
#define ALTCODE_UNICODE_LIB_H

#include <Arduino.h>
#include <HID-Project.h>

void alt_code(int num1, int num2, int num3, int num4);
void Unicode_Alt_Plus(String code);
void Unicode_Alt_X(String code);
void Keypad_press(int num);

#endif 
