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
     for(int j=1;j<=i;j++){ 
     if(j%2!=0)
     printf ("%d",j);
     }
      printf("\n");
    }
return 0;
}
    