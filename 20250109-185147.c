#include<stdio.h>
int main ()
{
    int n;
    //printf("The no. of row :");
   // scanf("%d",&row);
    printf("The no.: ");
    scanf("%d",&n);
    int a=n;
    for(int i=2;i<=n;i++){
     for(int j=1;j<=a;j++){ 
     if(j%2!=0)
     printf ("%d",j);
     }
     a--;
      printf("\n");
    }
return 0;
}
    