#include<stdio.h>
#define pi 3.14
int main() {
    int l,b,c;
    int r,R;
    float principle, Rate, Time;
    float simpleinterest;
    printf("the length:");
    scanf("%d",&l);
    printf("the breadth:");
    scanf("%d",&b);
    printf("the radius:");
    scanf("%d",&r);
    printf("the principle:");
    scanf("%f",& principle);
    printf("the rate:");
    scanf("%f",&Rate);
    printf("the Time:");
    scanf("%f",&Time);
    R=pi*r*r;
    c=l*b;
    simpleinterest= (principle*Rate*Time)/100;
    printf("the Area of the circle:%d\n",R);
    printf("the Area of the rectangle:%d\n",c);
    printf("The simple interest:%2f", simpleinterest);
    return 0;
}