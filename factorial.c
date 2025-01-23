#include<stdio.h>
int main()
{
    int n, fact=1;
    printf("Enter the no.:");
    scanf("%d",&n);
    // printf ("the table of %d is :",n);
    for (int i=1; i<=n; i++) {
        fact=fact*i;
        // result=n*i;
        //total_sum+=result ;
        // printf ("\n%d*%d=%d\n",n,i,n*i);
    }
    printf ("the sum=%d",fact);
    return 0;
}