#include<stdio.h>
void increasing (int n)
{
    if(n==0) return;
    increasing(n-1);
    printf("%d\n",n);
    decreasing(n-1);
     return;
    
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    increasing (n);
    return 0;
}
    