#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &v,int low,int mid,int high){
    int left = low;
    int right = mid + 1;
    vector<int> newv;
    while(left<=mid && right<=high){
        if(v[left]<=v[right]){
            newv.push_back(v[left]);
            left++;
        }
        else{
            newv.push_back(v[right]);
            right++;

        }
    }
    while(left<=mid){
        newv.push_back(v[left]);
        left++;
    }
    while(right<=high){
        newv.push_back(v[right]);
        right++;
    }
    for(int i=0;i<newv.size();i++){
        v[i+low] = newv[i];
    }
}
void mergesort(vector<int> &v,int low,int high){
    int mid;
    mid = (low + high)/2;
    if(low>=high){
        return;
    }
    mergesort(v,low,mid);
    mergesort(v,mid+1,high);
    merge(v,low,mid,high);
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<"Numbers before sorting are:";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    mergesort(v,0,n-1);
     cout<<"Numbers after sorting are:";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

}
