#include<stdio.h>
void decimalToBinary(int decimal) {
    if (decimal > 1)
        decimalToBinary(decimal / 2); //Divide by 2 for binary

    printf("%d", decimal % 2);
}

void decimalToOctal(int decimal) {
    if (decimal > 7)
        decimalToOctal(decimal / 8); //Divide by 8 for Octal

    printf("%d", decimal % 8);
}

void decimalToHexadecimal(int decimal) {
    if (decimal > 15)
        decimalToHexadecimal(decimal / 16); //Divide by 16 for Hexadecimal

    int remainder = decimal % 16;

    if (remainder < 10)
        printf("%d", remainder);
    else
        printf("%c", 'A' + remainder - 10); //Code to convert numbers>9 into alphabets
}
        
int main() {
    int decimal;
   
    scanf("%d", &decimal); //Input in decimal
    if(decimal<=0){
        printf("Error: Value should be greater than 0\n"); //Error for negative numbers
    }
    else {
    printf("Binary equivalent: ");
    decimalToBinary(decimal); //Function for Binary conversion
    
    printf("\nOctal equivalent: ");
    decimalToOctal(decimal); //Function for Octal conversion
    
    printf("\nHexadecimal equivalent: ");
    decimalToHexadecimal(decimal); //Function for hexadecimal conversion
    }
    
    return 0;
}
