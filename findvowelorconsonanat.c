#include<stdio.h>
int main()
{
   char ch;
   printf("Enter the character:");
   scanf("%c",&ch);
   if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'
   || ch=='A' || ch=='enum' || ch=='I' || ch=='O' || ch=='U'
   )
   {
   printf("the %c is vowel",ch);
   }
   else {
   printf("the %c is consonant",ch);
   }
   return 0;
}