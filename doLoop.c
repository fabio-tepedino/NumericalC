#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main(){

    float number1, total;
    int i;
    total = 0;

    do{
        printf("Please enter number: \n");
        scanf("%f", &number1);
        total = total + number1;
        i++;
    }while(i < 3);
        
    printf("Total Sum is = %f\n", total);
    return 0;
}