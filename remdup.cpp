//remove duplicates form sorted array
#include<bits/stdc++.h>
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
    int first = 0;
    
    
    for(int i=1;i<n;i++){
        if(v[i] != v[first]){
            
            first++;
            v[first] = v[i];
            
            
        }
        else{
        cout<<v[i]<<" ";
        }
    }
    
   
    
  }

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
//     int counter=0;
//     for(int i=0;i<n-1;i++){
//         if(v[i+1]<v[i]){
//             cout<<"false";
//             break;
//         }
//         counter++;
        
//     }
//     if(counter == n-1){
//         cout<<"true";
//     }
   
// }