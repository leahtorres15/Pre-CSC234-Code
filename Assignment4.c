//WTF does this thing do???

#include <stdio.h>

int main() {
   
    //
    int array[10];

    //Use for values in "array"
    int i=1;

    //
    int counter=0;

    //Defines values in "array"
    while (counter < 10) {
        
        //
        i=(2*i)+4;
       
        //
        if (!(i%2)) {

            //
            array[9-counter]=i;
           
            //
            counter++;
            }
    }

    //Sets a for loop with parameter j to get values for "array"
    for(int j=0; j<10; j++) {
        
        //
        printf("array[%i] = %i\n", j, array[j]);
    }

    return 0;
}
