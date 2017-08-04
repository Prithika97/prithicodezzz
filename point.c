#include<stdio.h>
int main() 
{
   int *r1, *r2;
   int num;
 printf("\nEnter two numbers : ");
   scanf("%d %d", r1, r2);
   num = *r1 + *r2;
printf("Sum = %d", num);
   return (0);
}
