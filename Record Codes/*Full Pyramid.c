#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows); //Input for no.of ws

    if (rows <= 0 || rows > 24) {
        printf("Invalid Input"); //Printing error for invalid input
        return 0;
    }
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf("  "); //For loop for printing space acc.to row
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("* ");
        } //Printing the pattern

        printf("\n");
    }

    return 0;
}
