#include<stdio.h>
int main()
{
   char ch;
   printf("Enter the character:");
   scanf("%c",&ch);
   if(65<=ch&& 90>=ch)
   {
   printf("the %c is uppercase",ch);
   }
   else if(97<=ch&&122>=ch){
   printf("the %c is lowercase",ch);
   }else 
   {
   printf ("not a aplhabe chalphabet");
   }
   return 0;
}