#include<iostream>
#include<vector>
using namespace std;
vector<int> cyclesort(vector<int>& v){
    int n = v.size();
    int i = 0;
    while (i < n) {
    int cidx = v[i] - 1;

    if (v[i] >= 1 && v[i] <= n && v[i] != v[cidx]) {
        swap(v[i], v[cidx]);
    } else {
        i++;
    }
}

    vector<int> mis;
    for(int i = 0;i<n;i++){
        if(v[i]!=i+1) mis.push_back(i+1);
    }
    return mis;
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
   vector<int> mis = cyclesort(v);
    for(int i =0;i<mis.size();i++){
      cout<<mis[i]<<" ";
    }
}