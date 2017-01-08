/*Prints "13 is the best number!<New Line>Wait, no... 7 is!!!" 
 *Returns 8 if successful
 */

#include <stdio.h>

int main() {
    
    //Defines an integer called "number" as 13
    int number=13;

    //Defines an integer called "correction" as 7
    int correction=7;

    /*Prints: 
     *"<number (13)> is the best number!
     *Wait, no... <correction (7)> is!!!"
     */
    printf("%i is the best number!\nWait, no... %i is!!!\n", number, correction);

    /*Returns 8 if successful 
     *To show it returns 8, compile the program, run it, and type "echo $?")
     */
    return 8;
}
