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
	// initialize wiringPi
	if(wiringPiSetup() == -1){
		printf("setup wiringPi failed !");
	}
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
	pinMode (PIN_DIP_RED, OUTPUT);
	pinMode (PIN_DIP_BLU, OUTPUT);
	pinMode (PIN_DIP_GRN, OUTPUT);
	pinMode (PIN_SMALL, INPUT);
	int sound = digitalRead(PIN_SMALL);
	
//	for (val = 255; val> 0; val --){
	printf("now sound = %d\n", sound);
	if(sound == HIGH){
	    softPwmCreate(PIN_DIP_BLU, 0, 0xff);
	    //digitalWrite(PIN_DIP_RED, HIGH);
	    softPwmWrite(PIN_DIP_BLU, 0x88);
	    delay (300);
	    softPwmWrite(PIN_DIP_BLU, 0xff);
	    delay (300);
	    softPwmWrite(PIN_DIP_BLU, 0x22);
	    printf(" all lights on");
	    delay (300);
	    softPwmStop(PIN_DIP_BLU);
	//	digitalWrite(PIN_DIP_BLU, LOW);
	//	digitalWrite(PIN_DIP_GRN, LOW);
	    delay (300);
	}
}

void program_exit(SharedVariable* sv) {
    // Clean up everything if needed.
    // This is called when the program finishes.
}

