int main()
{
   char string[MAX_SIZE];
   int alphabets, digits, others, i;
 alphabets = digits = others = i = 0;
printf("Enter any string : ");
 scanf("%d",&string);
 while(string[i]!='\0')
    {
       if((string[i]>='a' && string[i]<='z') || (string[i]>='A' && string[i]<='Z'))
        {
           alphabets++;
        }
        else if(string[i]>='0' && string[i]<='9')
        {
            digits++;
        }
        else
        {
            others++;
        }
 
        i++;
    }
 
    printf("Alphabets = %d\n", alphabets);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d\n", others);
return 0;
}