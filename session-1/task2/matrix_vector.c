
/*
 * Matrix-vector product
 */

 #include <stdio.h>

 int main( void ) {
    float a[4][4];
    float b[4];
    float c[4];

    /*
    Intialise the matrix a and vector b entries to 1. 
    Write code to compute the product.
    Store your answer in vector c
    Print your final answer
    */
    for (int i = 0; i < 4; i++) {
      b[i] = 1.0;
      c[i] = 0.0;
      for (int j = 0; j < 4; j++) {
         a[i][j] = 1.0;
         c[i] += a[i][j] * b[j];
      }
   }
   printf("The product of the matrix and vector is:\n");
   for (int i = 0; i < 4; i++) {
      printf("%.1f ", c[i]);
   }
   printf("\n");  
    return 0;
 }
