//Prints "The difference between start and end is 30"

//Header saying include standard input-output library
#include<stdio.h>

//Defines function named "main" returning an integer
int main() {

    //Define variable named "start" of integer type as 20 
    int start = 20;

    // Define variable named "end" of integer type as 50
    int end = 50;

    //Define "dif" as difference between "end" and "start"
    int dif = end-start;

    //Prints "The difference between start and end is <dif>" and starts a new line
    printf("The difference between start and end is %i\n", dif);

    //Return code for operating system, if returns 0, then has succeeded
    return 0;

}
