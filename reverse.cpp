#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=0,j=n-1;i<j;i++,j--){
        v[i] = v[i] + v[j];
        v[j] = v[i] - v[j];
        v[i] = v[i] - v[j];
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

}