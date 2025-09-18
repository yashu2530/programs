#include<iostream>
#include<vector>
using namespace std;
void cyclesort(vector<int>& v){
    int n = v.size();
    int i = 0;
    while(i<n){
          // if no. start from 0 to n
        //  int cidx = v[i]-1;
        // if(v[i] == i+1) i++;
         // if no. start from 1 to n
        int cidx = v[i]-1;
        if(v[i] == i+1) i++;
        else swap(v[i],v[cidx]);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    vector<int> v;
    for(int i =0;i<n;i++){
      cin>>arr[i];
      v.push_back(arr[i]);
    }
     cyclesort(v);
    for(int i =0;i<n;i++){
      cout<<v[i]<<" ";
    }
}