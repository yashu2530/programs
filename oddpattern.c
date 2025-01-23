#include<stdio.h>
int main ()
{
    int n;
    //printf("The no. of row :");
   // scanf("%d",&row);
    printf("The no.: ");
    scanf("%d",&n);
    int a=n;
    for(int i=1;i<=n;i++){
    int a=1;
     for(int j=1;j<=i;j++){ 
     printf ("%d",a);
     a=a+2;
     }
      printf("\n");
    }
return 0;
}
    