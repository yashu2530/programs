#include<iostream>
#include<vector>
using namespace std;
vector<int> duplicate(vector<int>& v){
    // insertions sort
    int n = v.size();
    for(int i =0;i<n;i++){
        int j=i;
        while(j>=1 && v[j]<v[j-1]){
            swap(v[j],v[j-1]);
            j--;
        }
    }
    //  for(int i =0;i<v.size();i++){
    //   cout<<v[i]<<" ";
    // }
    vector<int> dup;
    for(int i=0;i<n-1;i++){
       if(v[i] == v[i+1]) {
            if(dup.empty() || dup.back() != v[i])
                dup.push_back(v[i]);
        }
    }
    return dup;
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
    vector<int> d = duplicate(v);
    for(int i =0;i<d.size();i++){
      cout<<d[i]<<" ";
    }
}