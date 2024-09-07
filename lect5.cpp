//2 sum array

//Bruteforce method
//O(n^2)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v;
//     int gn;
//     for(int i=0;i<n;i++){
//         int a;
//         cin>>a;
//         v.push_back(a);
//     }
//     cin>>gn;
//     int flag = 0;
//     for(int i=0;i<n;i++){
//         if(i!=0){
//         for(int j=0,k=i+1;j<i,k<n;j++,k++){
//             int res = v[i] + v[j];
//             int res1 = v[i] + v[k];
//             if(i!=0 && res == gn){
//                 cout<<"yes"<<endl;
//                 cout<<"index-1:"<<i<<endl;
//                 cout<<"index-2:"<<j<<endl;
//                 flag = 1;
//                 break;
//             }
//             if(i!=0 && res1 == gn){
//                 cout<<"yes"<<endl;
//                 cout<<"index-1:"<<i<<endl;
//                 cout<<"index-2:"<<k<<endl;
//                 flag = 1;
//                 break;
//             }
//         }
//         }
//         else{
//         for(int j=1;j<n;j++){
//             int res;
//             res = v[i] + v[j];
//             if(res == gn){
//                 cout<<"yes"<<endl;
//                 cout<<"index-1:"<<i<<endl;
//                 cout<<"index-2:"<<j<<endl;
//                 flag = 1;
//                 break;
//             }
//         }
//         }
//         if(flag == 1){
//             break;
//         }
//     }
//     if(flag == 0){
//         cout<<"no";
//     }
// }

//better
//O(nlogn)
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
//     map<int,int> m;
//     int k;
//     cin>>k;
//     int target;
//     int flag = 0;
//     for(int i=0;i<n;i++){
//         target = k - v[i];
//         if(m.find(target)!=m.end()){
//             cout<<"yes"<<endl;
//             cout<<"index-1:"<<i<<endl;
//             cout<<"index-2:"<<m[target]<<endl;     
//             flag++;
//         }
//         m[v[i]] = i;
//     }
//     if(flag==0){
//         cout<<"no";
//     }

// }

// optimized
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
//     sort(v.begin(),v.end());
//     int start = 0;
//     int end = n-1;
//     int flag =0;
//     while(start<end){
//         int temp;
//         temp = v[start] + v[end];
//         if(temp == k){
//             cout<<"yes"<<endl;
//             flag++;
//             break;
//         }
//         else if(temp >k){
//             end--;
//         }
//         else if(temp<k){
//             start++;
//         }
//     }
//     if(flag ==0 ){
//         cout<<"no"<<endl;
//     }
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
// }

//sort 0's 1's 2's
//optimal method
//time complexity - O(n)
// #include<bits/stdc++.h>
// using namespace std;
// void swap(int &a,int &b){
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         int a;
//         cin>>a;
//         v.push_back(a);
//     }
//     int low=0,mid=0,high=n-1;
//     int count =0;
//     while(mid<=high){
//         if(v[mid] == 0){
//             swap(v[mid],v[low]);
//             low++;
//             mid++;
//         }
//         else if(v[mid] == 1){
//             mid++;
//         }
//         else if(v[mid] == 2){
//             swap(v[mid],v[high]);
//             high--;

//         }
//         count++;

//     }
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl<<count;
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
//     sort(v.begin(),v.end());
//     int start = 0;
//     int end = n-1;
//     int flag =0;
    
//     for(int i=0;i<n;i++){
//         int ka = 0;
//         ka = k - v[i];
        
    
//     while(start<end){
//         int temp;
//         temp = v[start] + v[end];
//         if(temp == ka){
//             cout<<"yes"<<endl;
//             flag++;
//             break;
//         }
//         else if(temp >ka){
//             end--;
//         }
//         else if(temp<ka){
//             start++;
//         }
//     }
//     if(flag ==0 ){
//         cout<<"no"<<endl;
//     }
   
//     }
//      for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	long t;
// 	cin>>t;
// 	for(int i=0;i<t;i++){
// 	    long n,m;
// 	    cin>>n>>m;
// 	    long arr[n];
// 	    for(int i=0;i<n;i++){
// 	        cin>>arr[i];  
// 	    }
//         long count = 0;
//         long j=0;
//         while(j<n-1){
//             if(arr[j]<m){
//                 arr[j+1] = arr[j] + arr[j+1];
//                 if(arr[j]>=m){   
//                     count++;
//                     j = j+2;
//                 }
//                 else{
//                     j++;
//                 }
//             }
//             else{
//                 j++;
//                 count++;
//             }
//         }
//         if(arr[n-1]>=m){
//             count++;
//         }
//         cout<<count<<endl;
// 	}
// }





