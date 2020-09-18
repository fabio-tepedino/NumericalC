#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    int number;
    char buf[1024]; // use 1kib just to be sure

    printf("Please enter a integer between 1 and 5:\n");
    //scanf("%d", &number);
    do
    {
        if(!fgets(buf, 1024, stdin))
        {
            // reading input failed, give up:
            return 1;
        }
        // have som input, convert to integer:
        number = atoi(buf);
    }while(number == 0);    // repeat until we get a valie input number

    switch(number){
        case 1:
            printf("Case1: Value is: %d", number);
            break;
        default:
            printf("Default case.\n%d", number);
            break;

    }
    
    char name[2];
    printf("\nNow choose a character a,b,c:\n");
    if(fgets(name, 2, stdin))
    {
        name[strcspn(name, "\n")] = 0;
    }
    

    switch(name[0]){
        case 'a':
            printf("Case1: Value is: %c", name[0]);
            break;
        case 'b':
            printf("Case1: Value is: %c", name[0]);
            break;
        default:
            printf("Default case.\n");
            break;

    }

    printf("\n");
    return 0;
}