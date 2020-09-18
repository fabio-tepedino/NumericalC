#define _CRT_SECURE_NU_WARNINGS
#include<stdio.h>

/* multiply two floating point numbers */

int main(){

    float number1, number2, total;

    printf("Enter first number: ");
    scanf("%f", &number1);
    printf("You entered: %f\n", number1);

    printf("Enter second number: ");
    float *address;
    address = &number2;
    scanf("\n%f", address);
    printf("You entered: %f\n", number2);

    total = number1 * number2;
    printf("Total is: %f\n\n", total);

    printf("\n%f" ,address);
    printf("\n%p\n" ,address);

    return 0;
}