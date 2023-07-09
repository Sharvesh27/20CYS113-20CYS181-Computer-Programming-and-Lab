#include<stdio.h>

int main() {
    int num;
    scanf("%d",&num); //Input for no.of rows
    if (num<1 || num>24) {
        printf("Invalid Input"); //Error statement if input is not in the constraint
    }
    else {
        for (int i=1;i<=num;++i) {
            for (int j=1;j<=i;++j) {
                printf("*  ");
            }
            printf("\n");
        } //Print the half pyramid pattern
    }
}
