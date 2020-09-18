#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/* for loop */

int main(){

    float number1, total;
    int i;
    total = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Please enter a number:\n ");
        scanf("%f", &number1);
        total = total + number1;
    }
    printf("Total Sum is = %f\n", total);
    return 0;
}