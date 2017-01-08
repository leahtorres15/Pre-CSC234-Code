/*Prints values of an array containing integers from 0 to 4 (1 on each line) 
 *Uses a for loop
 */

#include<stdio.h>

int main () {
    
    //Defines array called "array_to_loop" with 5 integers
    int array_to_loop[5]; 
    
    //Defines integer variable called "j" that will be used as for loop index
    int j;

/*Defines a for loop with:
    *Index: j going from 0 to 4 (since j is an integer < 5) 
    *Increment: j goes up by 1 each time until it reaches 4
*/
    for (j = 0; j < 5; j++) {

        //Sets value of array at index j to j+1
       array_to_loop[j] = j+1;
       
       //Prints values of "array_to_loop" at index j, each on a new line 
         printf("%d\n", array_to_loop[j] );
    }

    return 0;
}
