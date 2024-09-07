#include<bits/stdc++.h>
using namespace std;
int piv(vector<int> &v,int low,int high){
    int pivot = low;
    int i = low;
    int j = high;
    while(i<j){
    while(v[i]<=v[pivot] && i<=high){
        i++;
    }
    while(v[j]>v[pivot]&& j>=low){
        j--;
    }
    if(i<j){
        int temp;
        temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
    }
    int t;
    t = v[pivot];
    v[pivot] = v[j];
    v[j] = t;
    return j;
    }
void quick(vector<int> &v,int low,int high){
    if(low<high){
        int pivot;
        pivot = piv(v,low,high);
        quick(v,low,pivot-1);
        quick(v,pivot+1,high);
    }
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
    cout<<"elements before sorted are:";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    quick(v,0,n-1);
    cout<<endl<<"elements after sorted are:";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}