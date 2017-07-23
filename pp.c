#include<stdio.h>
int main()
{
int n,reverseinteger,reminder,original integer;
printf("enter an integer:");
scanf("%d",&n);
originalInteger=n;
while(n!=0)
{
reminder=n%10;
reversedinteger=reversedinteger*10+reminder;
n/=10;
}
if(originalinteger==reversedinteger)
printf("%d is  a palindrome.",originalinteger);
else
printf("%d is not palindrome.",originalinteger);
return 0;
}
