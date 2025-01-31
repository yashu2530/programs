#include<stdio.h>
int main()
{
   char ch;
   printf("Enter the character:");
   scanf("%c",&ch);
   if(('A'<=ch&&'Z'>=ch)||('a'<=ch&&'z'>=ch))
   {
   printf("the %c is alphabet",ch);
   }
   else {
   printf("the %c is not alphabet",ch);
   }
   return 0;
}