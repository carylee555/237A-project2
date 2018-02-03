// UCSD CSE237A - WI18
// Important! You WILL SUBMIT this file.
// Replace this with your implementation of Section 2
// For more details, please see the instructions in the class website.

#include "section1.h"
#include "shared_var.h"
#include <stdio.h>
#include <wiringPi.h>
#include <softPwm.h>

void program_init(SharedVariable* sv) {
	// You can initialize the shared variable if needed.
	sv->bProgramExit = 0;

	// You also need to initalize sensors here
}

void program_body(SharedVariable* sv) {
    // Implement your sensor handling procedure.
    // Keep also this in mind:
    // - Make this fast and efficient.
    //   In Section 2, it's a part of scheduled tasks.
    //   For example, if it is slow, this will degradade energy efficiency.
    // - So, don't make any loop (e.g., don't use "for" & "while")
    //   This would hurt the performance of the task.
    // - Don't make any delay using delay(), sleep(), etc
   	int val;
	pinMode (redpin, OUTPUT);
	pinMode (bluepin, OUTPUT);
	pinMode (greenpin, OUTPUT);
	Serial.begin (9600);
	
	for (val = 255; val> 0; val --){
	    analogWrite (11, val);
	    analogWrite (10, 255-val);
	    analogWrite (9, 128-val);
	    delay (10);
	    Serial.println (val, DEC);
	}
	for (val = 0; val <255; val ++){
	    analogWrite (11, val);
	    analogWrite (10, 255-val);
	    analogWrite (9, 128-val);
	    delay (10);
	    Serial.println (val, DEC);
	}
	 
}

void program_exit(SharedVariable* sv) {
    // Clean up everything if needed.
    // This is called when the program finishes.
}

