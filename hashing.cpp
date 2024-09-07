// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int p;
//     cin>>p;
//     int a[p];
//     for(int i=0;i<p;i++){
//         cin>>a[i];
//     }
//     int hash[13] = {0};
//     for(int i=0;i<n;i++){
//         hash[arr[i]] += 1;
//     }
//     for(int i=0;i<13;i++){
//         cout<<hash[i]<<" ";
//     }

// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    cin>>name;
    cout<<name<<endl;
    int hash[26] = {0};
    for(int i=0;i<name.size();i++){
        hash[name[i]-97]++;
    }
    for(int i=0;i<26;i++){
        cout<<char(i+97)<<"-"<<hash[i]<<" ";
    }


}
