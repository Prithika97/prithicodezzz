#include<stdio.h>
int main()
{
char str[26],ch;
int i,alphabet=0;
printf("enter a string :");
gets(str);
printf("enter a character to find the alphabet:");
scanf("%c",&ch);
for(i=0;str[i]!='\0';++i)
{
if(ch==str[i])
++alphabet;
}
printf("alphabet of %c=%d",ch,alphabet);
return o;
}
