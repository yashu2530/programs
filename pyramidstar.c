#include<stdio.h>
int main() {
    int n;
    printf("enter the no.: ");
    scanf ("%d",&n);
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n-1; j++) {
            printf (" ");
        }
        for(int k=1; k<=(2*i-1); k++) {
            printf ("*");
        }
        printf("\n");
    }
    return 0;
}