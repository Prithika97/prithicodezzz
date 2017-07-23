#include<stdio.h>
int main()
{
int i,n;
printf("print odd number till:");
scanf("%d",&n);
printf("all odd numbers from 1% d are:\n",n);
for(i=1;i<=n;i++)
{
if(i%2!=0)
{
printf("%d\n",i);
}
}
return 0;
}
