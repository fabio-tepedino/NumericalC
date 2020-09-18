#include <stdio.h>
/* rea and display a number*/
int main(){
    char c;

    printf("Enter character: ");
    c = getchar(); /* read the character in */

    printf("Character entered: ");
    putchar(c); /* write character*/
    printf("\n");

    return 0;
}