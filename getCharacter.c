#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char getCharacter()
{
    char name[2];
    if(fgets(name, 2, stdin))
    {
        name[strcspn(name, "\n")] = 0;
    }

    return name[0];
}