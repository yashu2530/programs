#include<iostream>
using namespace std;
int partion(int arr[],int si,int ei){
    int piv = arr[si];
    int  count =0;
    for(int i =si;i<=ei;i++){
        if(arr[i] < piv) count++;
    }
    int piid = count + si;
    swap(arr[si], arr[piid]);
    int i=si,j= ei;
    while(i < piid && j>piid){
        if(arr[i] < piv ) i++;
        if(arr[j] > piv ) j--;
        else if(arr[i] > piv && arr[j] <= piv){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return piid;
}
void qiccksort(int arr[],int si,int ei){
    if(si>=ei) return;
    int pi = partion(arr, si, ei);
    qiccksort(arr,si,pi-1);
    qiccksort(arr,pi+1,ei);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i <n;i++){
        cin>>arr[i];
    }
    qiccksort(arr,0,n-1);
     for(int i =0;i <n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}