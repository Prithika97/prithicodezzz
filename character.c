#include <stdio.h>
#include <ctype.h>
int count_nonspace(const char* str)
{
 int count = 0;
 while(*str)
 {
  if(!isspace(*str++))
  count++;
 }
 return count;
}

int main()
{
 char input[256];
 scanf("%d",(input, sizeof(input), stdin);
 printf("%d\n", count_nonspace(input));
}
