//longest subarray
//time complexity - O(n^3)
// #include<bits/stdc++.h>
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
//     int k;
//     cin>>k;
//     int len=0;
//     for(int i=0;i<n;i++){
//         for(int j = i;j<n;j++){
//             int count = 0;
//             for(int k=i;k<=j;k++){
//                 count = count + v[k];
//             }
//             if(count == k){
//                 len = max(len,j-i+1);
//             }
//         }
//     }
//     cout<<len; 
// }

//time complexity-O(n^2)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v;
//     int len = 0;
//     for(int i=0;i<n;i++){
//         int a;
//         cin>>a;
//         v.push_back(a);
//     }
//     int k;
//     cin>>k;
//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=i;j<n;j++){
//             sum = sum + v[j];
//             if(sum == k){
//             len = max(len,j-i+1);
//         }
//         }      
//     }
//     cout<<len;
// }

// #include<bits/stdc++.h>
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
//     int k;
//     cin>>k;
//     int maxlen = 0;
//     map<long long,int> mp;
//     long long sum = 0;
   
//     for(int i=0;i<n;i++){
//         sum +=v[i];
//         if(sum == k){
//             maxlen = max(maxlen,i+1);

//         }
//         long long rem = sum -k;
//         if(mp.find(rem)!=mp.end()){
//             int len = i - mp[rem];
//             maxlen = max(maxlen,len);
//         }
//         if(mp.find(rem) == mp.end()){
//             mp[sum] = i;
//         }
//     }
//     cout<<maxlen;
// }

// #include<bits/stdc++.h>
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
//     int k;
//     cin>>k;
//     int p = 0,q = 0;
//     long sum = 0;
//     int maxlen = 0;
//     for(int i=0;i<n;i++){
//         sum +=v[i];
//         q++;
//         if(sum == k){
//             maxlen = max(maxlen,q-p);
//         }
//         else if(sum>k){
//             sum = sum - v[p];
//             p++;
//             if(sum == k){
//             maxlen = max(maxlen,q-p);
//         }       
//         }
//     } 
//     cout<<maxlen;
// }

%{
    #include<stdio.h>

%}
