//Prints "Hello humans! This is my 1st program" (Play on "Hello World")

//Header saying include standard input-output library
#include<stdio.h>

//Define main function returing integer
int main() {

    //Define integer called program_number that is equal to 1
    int program_number = 2;

    //Writes "Hello humans! This is my 1st program!" to STDOUT and goes to next line 
   	printf("Hello humans!\nThis is my %ist program!\n", program_number);

	//Return code for operating system, if returns 0, then has succeeded
	return 0;

}
