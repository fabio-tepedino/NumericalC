#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int getNumber()
{
    int number;
    char buf[1024];

    if(!fgets(buf, 1024, stdin))
    {
        // reading input failed, give up:
        return 1;
    }
    // have som input, convert to integer:
    number = atoi(buf);

    return number;
}