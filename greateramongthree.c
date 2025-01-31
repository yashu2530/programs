#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the no.:");
    scanf("%d",&a);
    printf("Enter the no.:");
    scanf("%d",&b);
    printf("Enter the no.:");
    scanf("%d",&c);
    if(a>b&&a>c) {
        printf("%d is greater no.",a);
    } else if(b>a&&b>c) {
        printf("%d is greater ",b);
    } else if (c>a&&c>b) {
        printf ("%d is greater",c);
    }
    return 0;
}