/*Defines an integer named "Number" as 17 (which is below 20)
 *Due to set conditions, prints "That's below 20!"
 */

#include <stdio.h>

int main() {

    //Defines an integer named "Number" as 17
    int Number=17;

    //Says if the value of "Number" is under 20,
    if(Number<20) {

        /*If the corresponding condition (Number < 20) is true, 
         *Then print "That's below 20!"
         */
        printf("That's below 20!\n");

    //Says if the condition above is false and "Number" is > 20,
    } else if(Number>20) {

        /*If the corresponding conditon (Number > 20) is true, 
         *Then print "That's above 20!"
         */
        printf("That's above 20!\n");
    
    //Says if the above conditions are false,
    } else{

        //Print "That's 20"
        printf("That's 20\n");
    }
    return 0;
}
