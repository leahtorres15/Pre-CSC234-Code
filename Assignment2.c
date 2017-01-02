//Prints values of an array that contains integers from 0 to 4 (one on each line) using a for loop

#include<stdio.h>

int main () {
    
    //Define array with 5 integers as array_to_loop
    int array_to_loop[5]; 
    
    //Define index as j
    int j;

/*Define a for loop for parameters of j going from 0 to 4 (since j is an integer < 5) 
 *j goes up by 1 each time until it reaches 4
 */
    for (j = 0; j < 5; j++) {

        //Sets value of array at index j to j+1
       array_to_loop[j] = j+1;
       
       //Print values of array at index j, each on a new line 
         printf("%d\n", array_to_loop[j] );
    }

    return 0;
}
