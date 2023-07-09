#include<stdio.h>

struct complex { //Using struct to store real and imaginary values
    int real;
    int imaginary;
}c;

int main() {
    struct complex c[2]; //Declaring struct inside main function
    
    scanf("%d %d",&c[0].real,&c[0].imaginary);
    scanf("%d %d",&c[1].real,&c[1].imaginary); //Input for real and inaginary numbers
    
    int add_real = c[0].real + c[1].real; //Adding real values
    int add_imaginary = c[0].imaginary + c[1].imaginary; //Adding imaginary values
    
    int sub_real = c[0].real - c[1].real; //Subtracting real values
    int sub_imaginary = c[0].imaginary - c[1].imaginary; //Subtracting imaginary values
    
    printf("%d+%di\n",add_real,add_imaginary); //Printing sum
    printf("%d+%di",sub_real,sub_imaginary); //Printing difference
    
    return 0;
}
