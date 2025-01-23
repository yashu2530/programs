#include<stdio.h>
int main ()
{
    int row,n;
    printf("The no. of row :");
    scanf("%d",&row);
    printf("The no.: ");
    scanf("%d",&n);
    for(int i=1;i<=row;i++){
     for(int j=1;j<=n;j++){
     printf ("%d",j);
     } printf("\n");
    }
return 0;
}
