#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
      cin>>arr[i];
    }
    // insertions sort
    for(int i =0;i<n;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }

    }
    for(int i =0;i<n;i++){
      cout<<arr[i]<<" ";
    }
}