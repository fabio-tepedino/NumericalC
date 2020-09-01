#include<stdio.h>
int main()
{
printf("Hello World\n");
  
float this_is_a_number, total;
int i;
total = 0;

for(i = 0; i < 5; i++)
{
  printf("Please enter a number:\n");
  scanf("%f", &this_is_a_number);
  total = total + this_is_a_number;
}
printf("Total Sum is = %f\n", total);
  
return 0;
}
