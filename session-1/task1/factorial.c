
/*
 * Factorial
 */

 #include <stdio.h>
 int main( void ) {

    unsigned long long f[20];   

    for (int i = 0; i <= 19; i++) {
        unsigned long long value = 1;   

        for (int j = 1; j <= i; j++) {
            value *= j;               
        }

        f[i] = value;
    }

    printf("The array of factorial elements are:\n");
    for (int k = 1; k <= 20; k++) {
        printf("%2d! = %llu\n", k, f[k]);
    }

    return 0;



    /*
    Code to compute the factorial of each array index
    Print your final answer
    */

 }
