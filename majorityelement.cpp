//Majority element- element should occur more than n/2 times
//better method
#include<iostream>
#include<vector>
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
    int max = v[0];
    for(int i=0;i<n;i++){
        if(v[i]>max){
            max = v[i];
        }
    }
    int s = max+1;
    int hash[s] = {0};
    for(int i=0;i<n;i++){
        hash[v[i]]++;
    }
    int r = n/2;
    int flag = 0;
    for(int i=0;i<s;i++){
        if(hash[i] >r ){
            cout<<i<<endl;
            cout<<hash[i];
            flag++;
        }
    }
   if(flag == 0){
    cout<<"no such number";
   }
}

//Moore's voting algorithm
//time complexity - O(2n)
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         int a;
//         cin>>a;
//         v.push_back(a);
//     }
//     int count = 0;
//     int a;
//     int tmp = 0;
//     for(int i=0;i<n;i++){
//         if(count == 0){
//                 count = 1;
//                 a = v[i];
//         }
//         if(v[i] == a){
//             count++;
//         }
//         else{
//             count--;
//         }
//         tmp++;
//     }
//     int cnt =0;
//     for(int i=0;i<n;i++){
//         if(v[i] == a){
//             cnt++;
//         }
//         if(cnt > n/2){
//             cout<<v[i]<<endl;
//             break;
//         }
//     }
//     if(cnt < n/2){
//         cout<<"no such number!"<<endl;
//     }
//     cout<<tmp;
// }

