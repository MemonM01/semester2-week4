
/*
 * Transpose of a matrix
 */

 #include <stdio.h>

 int main( void ) {
    int a[4][4];

    /*
    Intialise the matrix a to 2i-j.
    Print out matrix a. 
    Write code for the transpose - you can use other variables as necessary but not a cpoy of the matrix 
    Print the transpose.
    */
      printf("The original matrix is:\n");
      for (int i = 0; i < 4; i++) {
         for (int j = 0; j < 4; j++) {
            a[i][j] = 2 * i - j;
            printf("%d ", a[i][j]);
         }
         printf("\n");
      }
      printf("The transpose of the matrix is:\n");
      for (int j = 0; j < 4; j++) {
         for (int i = 0; i < 4; i++) {
            printf("%d ", a[i][j]);
         }
         printf("\n");
      }  
    return 0;
 }
