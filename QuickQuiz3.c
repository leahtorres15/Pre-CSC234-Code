/*Defines 2 arrays
 *Defines a while loop finding the value of index 0 of array1 (17)
 *Prints the value of index 0 of array1
 *Finds when 17 is a value of some index of array2 
 *Prints a statement about this on another line
 *Finds the index of array2 where 17 is the value
 *Prints a statement about this on the final line
 */

#include <stdio.h>

int main() {

    //Defines an integer called "det_value" that = 0
    int det_value=0;

    //Defines an array called "array1" with 2 integers: 17 and 20
    int array1[2] = {17,10};

    //Defines another array called "array2" with 3 integers: 5, 17,and 20
    int array2[3] = {5,17,20};

    /*Defines a while loop that runs forever 
     *Runs forever because 1 is always true and it runs as long as 1 is true
     */
    while (1) {
       
        /*Says if the value of array at index 0 = the value of "det_value",
         *array1[0] = 17
         */
        if (array1[0] == det_value) {
           
            /*If the above condition (array1[0] = det_value)
             *Then break the while loop
                *Break means end
             */
            break;
        }
        
        /*Says otherwise, increase the value of "det_value" by 1 
         *Also run through the loop again
         */
        det_value++;
    }

    //Says print the value of "det_value" on one line
    printf("%i\n", det_value);
    
    /*Says if the value of "det_value" = either:
        *The value of array2 at index 0 or = the value of array2 at index 1,
        */
    if (det_value == array2[0] || det_value == array2[1]){

        /*If the above condition (array2[0,1] = det_value), 
         *Then print "The found value is in the first two of the second array"
         */
        printf("The found value is in the first two of the second array!\n");
    } 
    
    /*Defines a for loop with: 
        *Index: "i" an integer starting at 0 and ending at 2 
        *Increment: increases by 1 each time until after it hits 2
    */
    for (int i=0; i<3; i++) {
        
        //Says if the value of index i of array2 = the value of "det_value"
        if(array2[i] == det_value){

           /*If the above condition (array2[i] = det_val), 
            *Then print "The value at index <i> of the second array is the same
            as the value at index 0 of the first" all on one line
            */
            printf("The value at index %i of the second array is "
                    "the same as the value at index 0 of the first\n", i);
         }
    }

    return 0;
}
