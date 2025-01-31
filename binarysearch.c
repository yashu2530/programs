#include<stdio.h>
int main() {
    int n;
    printf ("enter the nth element:");
    scanf("%d",&n);
    int arr[n];
    printf (" enter array values");
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    int beg,end,mid,loc=0,x;
    printf ("enter the element to search:");
    scanf("%d",&x);
    beg=0;
    end=n-1;
    while(beg<=end) {
        mid=(beg+end)/2;
        if(x==mid) {
            loc=mid;
            printf ("the position is:%d",loc);
            break;
        }
        else if(x>mid) {
            beg=mid+1;
        } else if(x<mid) {
            end=mid-1;
        }
    }
    if( loc==0) {
        printf ("the element %d is not exist",x);
    }
    return 0;
}