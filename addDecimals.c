/* Add two floating point numbers */

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(){

    float number1, number2, total;

    printf("Enter first number: ");
    scanf("%f", &number1);
    printf("You entered: %f\n", number1);

    printf("Enter second number: ");
    scanf("%f", &number2);
    printf("You entered: %f\n", number2);

    total = number1 + number2;
    printf("Total is: %f\n", total);

    return 0;
}