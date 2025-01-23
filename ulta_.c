#include<stdio.h>
int main ()
{
    int n;
    //printf("The no. of row :");
   // scanf("%d",&row);
    printf("The no.: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
     for(int j=1;j<=i;j--){ //yaha j depend hai i per, i jitna rahega j bhi utna rahega
     //or i=1=j, to jitna i utna Star print
     printf ("*");
     } printf("\n");
    }
return 0;
}
    