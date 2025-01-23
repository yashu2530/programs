#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            printf("the no. is prime number %d",n);
        }
        else{
            printf("the no. is not a prime number %d",n);
        }
    }
    return 0;
}