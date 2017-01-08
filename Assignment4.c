//Populates an array with even numbers using a counter and while loop

#include <stdio.h>

int main() {
   
    //Defines an array called "array" consisting of 10 integers
    int array[10];

    /*Defines a varialbe integer "i" starting at 1, 
     *Will use the values of i for values in "array"
     */
    int i=1;

    /*Defines variable "counter" at 0 
     *Sets a counter that will count the even numbers in "array" 
        *The counter will start at 0
     */
    int counter=0;

    /*Defines a while loop that runs while the value of "counter" is <10
     *The while loop will define vals in "array"
     */
    while (counter < 10) {
        
        //Sets i = 2i +4
        i=(2*i)+4;
       
        /*Says if "i" is not odd (read: even),
         *Means it does not (!) produce a remainder when divided by 2,
         */
        if (!(i%2)) {

            /*If the corresponding conditon (i is even) is true, 
             *Then index 9-counter of "array" = the value of "i"
             */
            array[9-counter]=i;
           
            /*Adds +1 to "counter" before loop gets run through again
             *+1 because there was one more even number being put in the array
             */
            counter++;
        }
    }

    /*Defines a for loop with index j to get values for "array" 
     *The for loop runs 10 times
     */
    for(int j=0; j<10; j++) {
        
        //Prints "array[index] = array value" on each line
        printf("array[%i] = %i\n", j, array[j]);
    }

    return 0;
}
