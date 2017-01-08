//Prints values of the function f(x) = x^2 +3 from x = 0 to x = 10 as coordinates (x,f(x))

#include <stdio.h>

//Prototype of function named "funct" with input as an integer x
int funct(int x);

//Implementation of the main function
int main() {
    
    //Defines a for loop with an index integer "i" from 0 to 10 that increases by 1 each time
    for (int i=0; i<=10; i++) {

        /*The for loop runs 11 times
         *Prints coordinates (i, funct(i)) on a new line each time it runs
         *funct(i) is function "funct" with input i
         */
        printf("(%i, %i)\n", i, funct(i));
    }

    return 0;    
}

//Implementation of function "funct" with input integer called "x"
int funct(int x){

    //Returns the value <x^2 +3>
     return (x*x) + 3;
}
