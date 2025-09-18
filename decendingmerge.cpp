#include<iostream>
#include<vector>
using namespace std;
void mergeorder(vector<int>& b,vector<int>& a,vector<int>& v){
    
    int i=0,j=0,k=0;
    while (i<a.size() && j<b.size())
    {
        if(a[i]>b[j]){
            v[k++] = a[i++];
        }else{
             v[k++] = b[j++];
        }
    }
    while(i<a.size())  v[k++] = a[i++];
      while(j<b.size())  v[k++] = b[j++];
}
void mergesort(vector<int>& v){
    if(v.size() <= 1) return;
    int n= v.size();
    int n1= n/2, n2 = n-n/2;
    vector<int> a(n1) , b(n2);
     for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
 for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    mergesort(a);
    mergesort(b);
    mergeorder(a,b,v);

}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    mergesort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}