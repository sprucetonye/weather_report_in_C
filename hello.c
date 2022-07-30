#include <stdio.h>



/* making my first Weather report app */

int main(){
    int fahr, celsius;
    int lower, upper, step;

    lower = 0 ; /* lower limit of temperature scale */
    upper = 300; /* upper limit */
    step = 20; /* step size*/


    /* I used a while loop here to run through the variables, 
    what that seems to confuse me is the % sign, but I'm sure it helps you annotate the values in the variable*/
    fahr = lower;
    while (fahr <= upper){
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t %d\n", fahr, celsius);
        fahr = fahr + step;
    }
}