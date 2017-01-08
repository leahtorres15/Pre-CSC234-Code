//Prints odd integers 1 through 11, one on each line using a for loop

#include <stdio.h>

int main () {

    /*Defines a for loop with:
        *Index: integer i from 1 to 11 (inclusive)
        *Increment: increasing by 2 each time
        */
    for(int i=1; i<=11; i= i+2) {

        //Prints the numbers in the for loop, one on each line
        printf("%i\n",i);
    }

    return 0;
}
