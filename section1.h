// UCSD CSE237A - WI18
// All rights reserved

// Important! DO NOT MODIFY this file. You WILL NOT submit this file.
// You can implement your code ONLY in "shared_var.h" and "assignment1.c".
// This file provides the function interfaces used in the Section 1 assignment. 
// For more details, please see the instructions in the class website.
#ifndef _SECTION1_H_
#define _SECTION1_H_

// A. Pin number definitions 
// Important! WIRE USING FOLLOWING PIM NUMBERS.
// AGAIN, DON'T TOUCH THE PIN NUMBERS.
// We use 6 sensors.

// 1. Button
#define PIN_BUTTON 0

// 2. Auto-flash LED
#define PIN_ALED 2

// 3. Small audio sensor
#define PIN_SMALL 4

// 4. Big audio Sensor
#define PIN_BIG 6

// 5. DIP RGB LED (Dual In-line Package)
#define PIN_DIP_RED 7
#define PIN_DIP_GRN 8
#define PIN_DIP_BLU 9

// 6. SMD RGB LED (Surface Mount Device)
#define PIN_SMD_RED 27
#define PIN_SMD_GRN 28
#define PIN_SMD_BLU 29

// B. Functions
// You need to complete the following functions in
// "shared_var.h" and "assignment1.c".
// See also "main_section1.c" to know how these functions are called.
// Do not change any function name / parameters here.
typedef struct shared_variable SharedVariable;

// Init shared variable and sensors
void program_init(SharedVariable* sv);

// Read and actuate sensors
void program_body(SharedVariable* sv);

// Clean up everything if needed. This is called when the program finishes.
void program_exit(SharedVariable* sv); 

#endif
