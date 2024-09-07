//rotating array left by 1 place
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
//     int temp;
//     temp = v[0];
//     for(int i=1;i<n;i++){
//         v[i-1] = v[i];
//     }
//     for(int i=0;i<n-1;i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<temp;
// }

//rotating array left by d  places
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
//     int d;
//     cout<<"enter the no of times you want to rotate the array:";
//     cin>>d;
//     vector<int> temp;
//     for(int i=0;i<d;i++){
//         temp.push_back(v[i]);
//     }
//     for(int i=d;i<n;i++){
//         v[i-d] = v[i];
//     }
//     for(int i=0;i<d;i++){
//         v[i+d] = temp[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter no of elements you want to enter:";
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         int a;
//         cin>>a;
//         v.push_back(a);
//     }
//     int d;
//     cout<<"enter no of times you want to rotate the array:";
//     cin>>d;
//     for(int i=0,j=d-1;i<j;i++,j--){
//         v[i] = v[i] + v[j];
//         v[j] = v[i] - v[j];
//         v[i] = v[i] - v[j];
//     }
//     for(int i=d,j=n-1;i<j;i++,j--){
//          v[i] = v[i] + v[j];
//         v[j] = v[i] - v[j];
//         v[i] = v[i] - v[j];
//     }
//     for(int i=n-1;i>=0;i--){
//         cout<<v[i]<<" ";
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter no of elements you want to enter:";
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         int a;
//         cin>>a;
//         v.push_back(a);
//     }
//     int d;
//     cout<<"enter no of times you want to rotate the array:";
//     cin>>d;
//     reverse(v,v+d);
//     reverse(v+d,v+n);
//     reverse(v,v+n);
//     for(int i=n-1;i>=0;i--){
//         cout<<v[i]<<" ";
//     }
// }

//move zeros to the end
//Bruteforce
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
//     vector<int> temp;
//     int counter = 0;
//     for(int i=0;i<n;i++){
//         if(v[i]!=0){
//             temp.push_back(v[i]);
//         }
//         else{
//             counter++;
//         }
//     }
//     for(int i=0;i<temp.size();i++){
//         v[i] = temp[i];
//     }
//     for(int i=0;i<temp.size();i++){
//         cout<<v[i]<<" ";
//     }
//     for(int i=0;i<counter;i++){
//         cout<<0<<" ";
//     }
// }

//optimal method
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
//     int j = -1;
//     for(int i=0;i<n;i++){
//         if(v[i] == 0){
//             j = i;
//             break;
//         }
//     }
//     if(j == -1){
//         for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     }
//     else{
//         for(int i=j+1;i<n;i++){
//             if(v[i]!=0){
//                 swap(v[i],v[j]);
//                 j++;
//             }
//         }
//         for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     }
// }

//Union of sorted array
//Bruteforce
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n1;
//     cout<<"enter no of elements in the first set:";
//     cin>>n1;
//     vector<int> v1,v2;
//     for(int i=0;i<n1;i++){
//         int a;
//         cin>>a;
//         v1.push_back(a);
//     }
//     int n2;
//     cout<<"enter no of elements in the first set:";
//     cin>>n2;
//     for(int i=0;i<n2;i++){
//         int a;
//         cin>>a;
//         v2.push_back(a);
//     }
//     set<int> s;
//     for(int i=0;i<n1;i++){
//         s.insert(v1[i]);
//     }
//     for(int i=0;i<n2;i++){
//         s.insert(v2[i]);
//     }
//     for(auto it:s){
//         cout<<it<<" ";
//     }
// }

//2 pointer approach
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n1;
//     cout<<"enter no of elements in first vector:";
//     cin>>n1;
//     int n2;

   
//     vector<int> v1,v2,u;
//     for(int i=0;i<n1;i++){
//         int a;
//         cin>>a;
//         v1.push_back(a);
//     }
//      cout<<"enter no of elements in second vector:";
//     cin>>n2;
//      for(int i=0;i<n2;i++){
//         int a;
//         cin>>a;
//         v2.push_back(a);
//     }
//     int i=0,j=0;
//     while(i<n1 && j<n2){
//         if(v1[i]<=v2[j]){
//             if(u.size()==0 || u.back()!=v1[i]){
//                 u.push_back(v1[i]);
//                 i++;
//             }
//         }
//         else{
//             if(u.size()==0 || u.back()!=v2[j]){
//                 u.push_back(v2[j]);

//             }
//             j++;
//         }
//     }
//     while(i<n1){
//         if(u.back()!=v1[i]){
//             u.push_back(v1[i]);
//         }
//         i++;
//     }
//      while(j<n2){
//         if(u.back()!=v2[j]){
//             u.push_back(v2[j]);
//         }
//         j++;
//     }
//     for(int i=0;i<u.size();i++){
//         cout<<u[i]<<" ";
//     }

// }


// for unsorted array
// union
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n1;
//     cout<<"enter the no of elements in the vector 1:";
//     cin>>n1;
//     vector<int> v1,v2,u;
//     for(int i=0;i<n1;i++){
//         int a;
//         cin>>a;
//         v1.push_back(a);
//     }
//     int n2;
//     cout<<"enter the no of elements in the vector 2:";
//     cin>>n2;
//     for(int i=0;i<n2;i++){
//         int a;
//         cin>>a;
//         v2.push_back(a);
//     }
//     for(int i=0;i<n1;i++){
//         auto it = find(u.begin(),u.end(),v1[i]);
//         if(it == u.end()){
//             u.push_back(v1[i]);
//         }
//     }
//     for(int i=0;i<n2;i++){
//         auto it = find(u.begin(),u.end(),v2[i]);
//         if(it == u.end()){
//             u.push_back(v2[i]);
//         }
//     }
//     for(int i=0;i<u.size();i++){
//         cout<<u[i]<<" ";
//     }
// }

// intersection of two sorted arrays
// bruteforce
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n1,n2;
//     cout<<"enter the value of n1:";
//     cin>>n1;
//     vector<int> v1,v2,ans;
//     for(int i=0;i<n1;i++){
//         int a;
//         cin>>a;
//         v1.push_back(a);
//     }
//     cout<<"enter the value of n2:";
//     cin>>n2;
//     for(int i=0;i<n2;i++){
//         int a;
//         cin>>a;
//         v2.push_back(a);
//     }
//     int vis[n2] = {0};
   
//    for(int i=0;i<n1;i++){
//     for(int j=0;j<n2;j++){
//         if(v1[i]==v2[j] && vis[j] == 0){
//             ans.push_back(v1[i]);
//             vis[j] =1;
//             break;
//         }
//         if(v2[j]>v1[i]){
//             break;
//         }

//     }
//    }
//    for(int i=0;i<ans.size();i++){
//     cout<<ans[i]<<" ";
//    }
// }

//optimal solution
//O(n1+n2)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n1,n2;
//     cout<<"enter the value of n1:";
//     cin>>n1;
//     vector<int> v1,v2,ans;
//     for(int i=0;i<n1;i++){
//         int a;
//         cin>>a;
//         v1.push_back(a);
//     }
//     cout<<"enter the value of n2:";
//     cin>>n2;
//     for(int i=0;i<n2;i++){
//         int a;
//         cin>>a;
//         v2.push_back(a);
//     }
//     int i=0,j=0;
//     while(i<n1 && j<n2){
//         if(v1[i]<v2[j]){
//             i++;
//         }
//         else if(v2[j]<v1[i]){
//             j++;
//         }
//         else{
//             ans.push_back(v1[i]);
//             i++;
//             j++;

//         }
//     }
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
// }


