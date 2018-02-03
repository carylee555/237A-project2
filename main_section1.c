// UCSD CSE237A - WI18
// All rights reserved

// Important! DO NOT MODIFY this file. You will not submit this file.
// This file is provided for your understanding of the program procedure.
// For more details, please see the instructions in the class website

#include <stdio.h>
#include <pthread.h>
#include <wiringPi.h>
#include "section1.h"
#include "shared_var.h"

int main(int argc, char* argv[]) {
	SharedVariable v;

	if (wiringPiSetup() == -1) {
		printf("Failed to setup wiringPi.");
		return 1; 
	}

	program_init(&v);

	while (v.bProgramExit != 1) {
        program_body(&v);
		delay(1);
	}

    program_exit(&v);

	printf("Program finished.\n");

	return 0;
}
