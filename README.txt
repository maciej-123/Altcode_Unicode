Altcode and Unicode library for Ardunio (Pro) Micro and Ardunio Leonardo Keyboard Emulation.

Created by Maciej Zajaczkowski，Copyright 2020 ©. Free free to use this library even for commercial purposes, but please attribute me.

To include library: #include <Altcode_Unicode_lib.h>

Warnings and prerequisites:

-This library will only work on Ardunio (Pro) Micro and Arduino Leonardo boards as it makes us of the "Keyboard.h" 
library to automatically emulate keystrokes.

SUMMARY WARNINGS: check numlock, check windows language, download unicode input

-The library contains 3 functions:
	-Altcode 
	-Unicode_Alt_X
	-Unicode_Alt_Plus (MUST HAVE: unicodeinput.exe) https://www.fileformat.info/tool/unicodeinput/

-The altcode function take 4 integers and executes an altcode macro. For this to work properly, please ensure that 
NUMLOCK is set to the correct position such that numbers can be inputted via the number keypad. Also alt codes may 
not work on some apps and may cause UNPREDICABLE BEHAVIOUR. For codes of less than 4 digits, insert -1 for blank digit.

- The Unicode_Alt_X function takes in a string of up to 4 hexadecimal digits (0-9 and a-f) (5 digits may work by not always) 
and executes a macro to print unicode characters via the Alt-X command. This does NOT work in ALL applications, ie chrome. 
However it should work fine on microsoft word. Please check the language windows is set to english before use  
(ie chinese pinyin input will mess up functions).

-The Unicode_Alt_Plus function takes a string of up to 5 hexadecimal digits and executes a macro to type and send a hex code
into unicodeinput.exe (availible from: https://www.fileformat.info/tool/unicodeinput/). It also removes any code previously
typed into unicodeinput.exe. Please note that this app MUST be open for codes to be sent to it, otherwise this macro will just 
print codes. To outopen the app you can pin it to taskbar and then execute a macro for Win + num posiiton on taskbar.
