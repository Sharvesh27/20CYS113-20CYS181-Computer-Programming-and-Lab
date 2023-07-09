#include <stdio.h>

int main() {
    int i,j,k;
   int a[3][3], b[3][3], c[3][3]; //Declaring variables

   for (i = 0; i < 3; i++) {
      for ( j = 0; j < 3; j++) {
         scanf("%d", &a[i][j]);
      }
   } //Input for Matrix 1

   for (i = 0; i < 3; i++) {
      for ( j = 0; j < 3; j++) {
         scanf("%d", &b[i][j]);
      }
   } //Input for matrix 2

   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         c[i][j] = 0;
         for (k = 0; k < 3; k++) {
            c[i][j] += a[i][k] * b[k][j];
         }
      }
   } //Calculating Product matrix
   
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         printf("%d ", c[i][j]);
      }
      printf("\n");
   } //Displaying the product matrix

   return 0;
}
