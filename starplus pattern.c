#include<stdio.h>
int main() {
    int n;
    printf("enter the no.: ");
    scanf ("%d",&n);
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(j=n/2+1 || i=n/2+1) {
                printf ("*");
            }
            else {
                printf (" ");
            }
        }
    }
    return 0;
}