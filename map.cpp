#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of elements:";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int> mp;
    int m;
    cout<<"enter the no of elements you want to count:";
    cin>>m;
    int ar[m];
    for(int i=0;i<m;i++){
        cin>>ar[i];
    }
    for(int i=0;i<m;i++){
        mp[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        cout<<mp[i];
    }
}