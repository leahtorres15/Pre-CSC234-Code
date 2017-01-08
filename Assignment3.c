/*Makes an array of values 3 through 30
 *Uses a for loop and notes whether each one is <10, between 10 and 20, between 20 and 24, or says it's a big number using conditionals
 *Counts how many are under each classification and notes findings
 */

#include <stdio.h>

int main() {

    //Defines  an array of 10 integers called "array"
    int array[10];
    
    //Defines an integer called "i"
    int i;

    //Defines variable called "counter10" as 0 to set the counter "10" to start at 0
    int counter10=0;

    //Defines variable called "counter20" as 0 to set the counter "20" to start at 0
    int counter20=0;

    //Defines variable called "counter24" as 0 to set the counter "24" to start at 0
    int counter24=0;

    //Defines variable called "countermore" as 0 to set the counter "more" to start at 0
    int countermore=0;

    //Defines a for loop with the index of i (integers 0 to 9) that increase by 1 until hits 9
    for (i=0; i<10; i++) {

        /*Sets "array" to be indexed by i
         *"array" is the set of values starting at 3 and ending at 30 that goes up by 3 each time
         */
        array[i] = (3*i)+3;

        //Says if value i of "array" is <10,
        if (array[i]<10) {

            //If the corresponding condition (value i of "array" <10) is true, then print "Value <value i of "array"> is less than 10"
            printf("Value %i is less than 10 \n", array[i]);

            //Also increase the value on counter "10" by 1
            counter10++;

        //Says if the above conditon is false but value i of "array" is below 20 (the , means disregard any condition stated before it),
        } else if (array[i]>10, array[i]<20) {

            //If the corresponding condition (value i of "array" between 10 and 20) is true,print "Value <value i of "array"> is between 10 and 20"
            printf ("Value %i is between 10 and 20 \n", array[i]);

            //Also increase the value on counter "20" by 1
            counter20++;

        //Says if the above conditions are false but the value i of "array" is bewtween 20 and 24 inclusive,
        } else if (array[i]>=20, array[i]<=24) {

            //If the corresponding conditon (value i of "array" is between 20 and 24 inclusive), print "Value <value i of "array"> is between 20 and 24"
            printf ("Value %i is between 20 and 24 \n", array[i]);

            //Also increase the value on counter "24" by 1
            counter24++;
       
        //Says if the above statements are false,
        } else {

            //Print "<value i of "array"> is a pretty big number!"
            printf("%i is a pretty big number! \n", array[i]);

            //Also increase the value on counter "more" by 1
            countermore++;
        }
    }

    /*Prints the results of the counters:
     *"There are <value of counter 10> values at or below 10,
     *<value of counter 20> values between 10 and 20,
     *<value of counter 24> values between 20 and 24,
     *and <value of counter more> big numbers"
     */
    printf("\nThere are %i values at or below 10,\n%i values between 10 and 20,\n%i values between 20 and 24,\nand %i big numbers\n",counter10,counter20,counter24,countermore);

    return 0;
}
