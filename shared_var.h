// UCSD CSE237A - WI18
// Important! You WILL SUBMIT this file.
#ifndef _SHARED_VAR_H_
#define _SHARED_VAR_H_

// **** Shared structure *****
// All thread fuctions get a shared variable of the structure
// as the function parameter.
// If needed, you can add anything in this structure.
typedef struct shared_variable {
	int bProgramExit; // Once it is set to 1, the program will be terminated.

} SharedVariable;

#endif
