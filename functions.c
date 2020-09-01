#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*This code demonstrate what a function does */
/*The function here compares two numbers and say which is bigger*/
/*The user enter three numbers and get told which is bigger than which !*/
void myfunction(int a, int b);	/* declaration of your function and its parameters*/

int first, second, third;

void main()
{
	printf("Please enter first integer number");
	scanf("%d", &first);
	printf("Please enter second integer number");
	scanf("%d", &second);
	printf("Please enter third integer number");
	scanf("%d", &third);

	myfunction(first, second);
	myfunction(first, third);
	myfunction(second,third);
}

void myfunction(int a, int b)
{
	if(a>b)
		printf("%d is greater than %d\n", a,b);
	else if(a<b)
		printf("%d is greater than %d\n", b,a);
	else
		printf("%d and %d are equals\n", a,b);
}

