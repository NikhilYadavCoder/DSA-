//missing number in the numbers from 1 to n
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter value of n:";
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<n-1;i++){
//         int a;
//         cin>>a;
//         v.push_back(a);
//     }
//     for(int i=0;i<n-1;i++){
//         if(v[i+1] != v[i] + 1){
//             cout<<v[i]+1;
//             break;
//         }
//     }
// }

//Missing Number
//Bruteforce Method
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<n-1;i++){
//         int a;
//         cin>>a;
//         v.push_back(a);
//     }
//     for(int i=1;i<=n;i++){
//         bool flag = false;
//         for(int j=0;j<n;j++){
//             if(v[j]==i){
//                 flag = true;
//                 break;
//             }

//         }
//         if(flag == false){
//             cout<<i;
//         }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<n-1;i++){
//         int a;
//         cin>>a;
//         v.push_back(a);
//     }
//     int hash[n+1] = {0};
//     for(int i=0;i<n-1;i++){
//         hash[v[i]]++;
//     }
//     for(int i=1;i<=n;i++){
//         if(hash[i] == 0){
//             cout<<i;
//             break;
//         }

//     }
// }

//optimal method
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<n-1;i++){
//         int a;
//         cin>>a;
//         v.push_back(a);
//     }
//     int sum;
//     sum = (n*(n+1))/2;
//     int s=0;
//     for(int i=0;i<n-1;i++){
//         s = s + v[i];

//     }
//     cout<<sum-s;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v;

//     for(int i=0;i<n-1;i++){
//         int a;
//         cin>>a;
//         v.push_back(a);
//     }
//     int xor1 = 0;
//     int xor2 = 0;
//     for(int i=0;i<n-1;i++){
//         xor1 = xor1 ^ (i+1);
//         xor2 = xor2 ^ (v[i]);
//     }
//     xor1 = xor1 ^ (n);
//     int res = xor1 ^ xor2;
//     cout<<res;
// }

//maximum consecutive ones
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
//     int count = 0;
//     set<int> s;
//     for(int i=0;i<n;i++){
//         if(v[i]==1){
//             count++;
//         }
//         else{
//             s.insert(count);
//             count = 0;
            
//         }
//     }
//     s.insert(count);
//     if(!s.empty()){
//         int lastelement = *s.rbegin();
//         cout<<lastelement;
//     }
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
//     int count = 0;
//     int maxi = 0;
//     for(int i=0;i<n;i++){
//         if(v[i]==1){
//             count++;
//             maxi = max(maxi,count);
//         }
//         else{
//             count = 0;
//         }
//     }
//     cout<<maxi;
// }

//find the number that appears once and all other numbers twice
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
//     int max = v[0];
//     for(int i=0;i<n;i++){
//         if(v[i]>max){
//             max = v[i];
//         }
//     }
    
//     int temp = max + 1;
//     int hasharr[temp] = {0};
//     for(int i=0;i<n;i++){
//         hasharr[v[i]]++;
//     }
//     for(int i=0;i<temp;i++){
//         if(hasharr[i] == 1){
//             cout<<i<<" ";
//         }
   
//     }
    
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
//     map<long,long> mp;
//     for(int i=0;i<n;i++){
//         mp[v[i]]++;

//     }
//     for(auto it:mp){
//         if(it.second == 1){
//             cout<<it.first;
//         }
//     }
    
// }

//optimal
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
//     int xor1 = 0;
//     for(int i=0;i<n;i++){
//         xor1 = xor1 ^ v[i];

//     }
//     cout<<xor1;
    
// }
