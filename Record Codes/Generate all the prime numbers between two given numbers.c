#include<stdio.h>

int isprime(n) {
    if (n<=0) {
        return 0; //Checking if number is positive or not
    }
    for(int i=2;i*i<=n;i++){ //Checking all numbers between them
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

void generateprime(j,k) {
    int n;
    printf("Prime numbers between %d and %d are: " ,j,k);
    for(n=j;n<=k;n++) {
        if(isprime(n)){ //Calling the function to check prime numbers
            printf("%d\t",n); //Printing the numbers
        }
    }
    printf("\n");
}
int main() {
    int j,k;
    scanf("%d",&j); Input number 1
    scanf("%d",&k); Input number 2
    
    generateprime(j,k); //Calling the function
    return 0;
}
