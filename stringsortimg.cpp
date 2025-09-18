#include<iostream>
#include<string>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // int arr[n];
    string arr;
    cin>>arr;
    int n= arr.length();
    
    // buble sort
    // for(int i=0;i<n-1;i++){
    //     for(int j =0;j<n-1-i;j++){
    //         if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
    //     }
    // }

    // selection
    //  for(int i =0;i<n-1;i++){
    //     for(int j=i;j<n;j++){
    //         if(arr[i]>arr[j]) swap(arr[i],arr[j]);
    //     }
    // }

     // insertions sort
    for(int i =0;i<n;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }

    }
    cout<<arr;
}