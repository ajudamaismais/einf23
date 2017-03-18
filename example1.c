

#include <stdio.h>
#include <stdlib.h>
#include "einf23/einf23.h"


int main(int argc, char const *argv[])
{
	
	//construct the read object 
	ReadObject read = build_read();
	//declaring a string
	String name;

	printf("> ");
	//reading a string
	name = read.string();

	printf("Input: %s\n", name);

	return 0;

}