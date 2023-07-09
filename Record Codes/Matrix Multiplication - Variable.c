#include <stdio.h>

int main() {
    int row, column;
    scanf("%d%d", &row, &column); //Input for rows and colums

    int inp1[row][column];
    int inp2[row][column];
    int inp3[row][column]; //DEclaring arrays for matrices

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &inp1[i][j]);
        }
    } //Input for Matrix 1

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &inp2[i][j]);
        }
    } //Input for Matrix 2

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            inp3[i][j] = 0;
            for (int k = 0; k < column; k++) {
                inp3[i][j] += inp1[i][k] * inp2[k][j];
            }
        }
    } //Calculating product

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d ", inp3[i][j]);
        }
        printf("\n");
    } //Displaying the product matrix

    return 0;
}
