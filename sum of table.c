#include<stdio.h>
int main()
{
    int n;
    int result , total_sum=0;
    printf("Enter the no.:");
    scanf("%d",&n);
    printf ("the table of %d is :",n);
    for (int i=1; i<=10; i++) {
    result=n*i;
    total_sum+=result ;
      // printf ("\n%d*%d=%d\n",n,i,n*i);
    }
    printf ("the sum=%d",total_sum);
    return 0;
}