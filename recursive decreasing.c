#include<stdio.h>
int factorial(int n)
{
    if(n==0) return 1;
    return decreasing(n-1);
    printf("%d\n",n);
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    decreasing(n);
    return 0;
}
    