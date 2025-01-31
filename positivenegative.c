#include<stdio.h>
int main()
{
    int num;
    printf("Enter the no.:");  
     scanf("%d",&num);
  //  printf("Enter the no.:");
   // scanf("%d",&b);
  //  printf("Enter the no.:");
    //scanf("%d",&c);
    if(num>=0) {
        printf("%d is positive number",num);
    } else { 
    printf("%d is negative number",num);
    }
    
    return 0;
}