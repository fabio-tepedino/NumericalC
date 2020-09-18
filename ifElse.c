#include<stdio.h>
#include<stdlib.h>
#include "getNumber.c"

int main(void)
{
    int number;

    printf("Enter number between 1 and 10: \n");
    number = getNumber();
    
    if(number < 6)
        printf("This is less than 6;\n");

    printf("Please enter a int between 10 and 20:\n");
    number = getNumber();

    if(number > 6)
    {
        printf("Bigger than 6\n");
    }
    else
    {
        printf("This is number greater than 15\n");
    }

    return 0;
}