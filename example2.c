

#include <stdio.h>
#include <stdlib.h>
#include "einf23/einf23.h"

//construct the read object 
ReadObject read;
int number;

void way1 () {
	printf("> ");
	//normal way,no error checking
	number = read.integer();
}

void way2 () {
	
	printf("> ");
	
	do {
		
		number = read.integer();
		
		if (IsNan()) { 
			printf("Please, input a number!\n");
			printf("> ");
		}

	} while(IsNan());

}

void way3 () {
	//number = read.winteger("> ", "input a number, please!");
	number = read.winteger("> ", nil);
}

int main(int argc, char const *argv[])
{

	read = build_read();
	
	/*reading an integer*/

	/**
	 ** normal way,no error checking*/
	//way1();

	/**
	 ** Checking errors using the IsNan() function and a do..while loop */ 
	//way2();
	
	/**
	 ** full error checking with winteger() function which takes
	 ** 2 args, the text to display before the input and the warning
	 ** It's the best of both worlds. Second arg is optionable, if you
	 ** want to diismiss it, just type "nil" and a default error message
	 ** will be displayed */ 
	way3();

	printf("Input: %d\n", number);

	return 0;

}
