#include<stdio.h>
int main()
{
    int n;
    
    printf("Enter the no.:");
    scanf("%d",&n);
    printf ("the table of %d is :",n);
    for (int i=1; i<=10; i++) {
    n*i;
       printf ("%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}