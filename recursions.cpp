// #include<bits/stdc++.h>
// using namespace std;
// void name(int i,int n){
//     if(i == n){
//         return;
//     }
//     else{
//     cout<<"nikhil"<<endl;
//     i++;
//     name(i,n);
//     }

// }
// int main(){
//     int i=0;
//     int n;
//     cout<<"enter the value of n:";
//     cin>>n;

//     name(i,n);
// }

// #include<bits/stdc++.h>
// using namespace std;
// void num(int i,int n){
//     if(i == n+1){
//         return;
//     }
//     else{
//         cout<<i<<" ";
//         i++;
//         num(i,n);
//     }
// }
// int main(){
//     int n;
//     cout<<"enter the number:";
//     cin>>n;
//     int i=1;
//     num(i,n);
// }

// #include<bits/stdc++.h>
// using namespace std;
// void num(int i,int n){
//     if(i == 0){
//         return;
//     }
//     else{
//         cout<<i<<" ";
//         i--;
//         num(i,n);
//     }
// }
// int main(){
//     int n;
//     cout<<"enter the number:";
//     cin>>n;
//     int i=n;
//     num(i,n);
// }

// #include<bits/stdc++.h>
// using namespace std;
// void num(int i,int n){
//     if(i > n){
//         return;
//     }
//     else{
//         num(i+1,n);
//         cout<<i<<" ";
        
        
        
//     }
// }
// int main(){
//     int n;
//     cout<<"enter the number:";
//     cin>>n;
//     int i=1;
//     num(i,n);
// }

// #include<bits/stdc++.h>
// using namespace std;
// void num(int i,int n){
//     if(i<1){
//         return;
//     }
//     else{
//         num(i-1,n);
//         cout<<i<<" ";
//     }
// }
// int main(){
//     int n;
//     cout<<"enter the number:";
//     cin>>n;
//     int i = n;
//     num(i,n);
// }

// sum of first n numbers
// #include<bits/stdc++.h>
// using namespace std;
// void sum(int s,int n,int su){
//     if(s == n+1){
//         cout<<su;
//         return;
//     }
//     else{
        
//         su = su + s;
//         s++;
//         sum(s,n,su); 
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int s = 1;
//     int su = 0;
//     sum(s,n,su);

// }

// #include<bits/stdc++.h>
// using namespace std;
// void sum(int i,int s){
//     if(i == 0){
//         cout<<"sum is "<<s;
//         return;
//     }
//     else{
//         sum(i-1,s+i);
//     }

// }
// int main(){
//     int n;
//     cin>>n;
//     int i = n;
//     int s = 0;
//     sum(i,s);

// }

// factorial of a number
// #include<bits/stdc++.h>
// using namespace std;
// void fact(int i,int f){
//     if(i == 0){
//         cout<<f;
//         return;
//     }
//     else{
//         fact(i-1,f*i);
//     }

// }
// int main(){
//     int n;
//     cin>>n;
//     int i = n;
//     int f = 1;
//     fact(i,f);

// }

//reverse an array
// #include<bits/stdc++.h>
// using namespace std;
// void swap(int &a,int &b){
//     int l;
//     l = a;
//     a = b;
//     b = l;
// }
// void reverse(int arr[],int l,int r,int n){
//     if(l>=r){
//         for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";

//     }
//     return;

//     }
//     else{
//         swap(arr[l],arr[r]);
//         reverse(arr,l+1,r-1,n);
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     reverse(arr,0,n-1,n);
// }

// #include<bits/stdc++.h>
// using namespace std;
// void swap(int &a,int &b){
//     int l;
//     l = a;
//     a = b;
//     b = l;
// }
// void reverse(int arr[],int l,int n){
//     if(l>=n/2){
//         cout<<"Array after being reversed:";
//        for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return; 
//     }
//     else{
//         swap(arr[l],arr[n-l-1]);
//         reverse(arr,l+1,n);

//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"Original Array is ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     reverse(arr,0,n);
// }

// #include<bits/stdc++.h>
// using namespace std;
// void palindrome(string s,int l,int n){
//     if(l>=n/2){
//          cout<<"true";
//     }
//     else if(s[l] != s[n-l-1]){
//         cout<<"false";
//     }
//     else{
//         palindrome(s,l+1,n);
//     }

// }
// int main(){
//     string s;
//     cin>>s;
//     cout<<s<<endl;
//     int l = s.size();
//     palindrome(s,0,l);

// }

// Time Complexity - 2^n

// #include<bits/stdc++.h>
// using namespace std;
// int fibonacci_ques(int n){
//     if(n<=1){
//         return n;
//     }
//     else{
//         int last = fibonacci_ques(n-1);
//         int second_last = fibonacci_ques(n-2);
//         return last+second_last;
//     }

// }
// int main(){
//    int n;
//    cout<<"enter the value of n:";
//    cin>>n;
//    int result;

//    result = fibonacci_ques(n);
//    cout<<"result is "<<result;
   
// }

