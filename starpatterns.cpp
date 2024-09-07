// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=n;j>=i;j--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i+1;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<2*i+1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=n;i>=1;i--){
//         for(int j=0;j<n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<2*i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
   
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=0;j<n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<2*i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//      for(int i=n;i>=1;i--){
//         for(int j=0;j<n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<2*i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=n-1;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if(i%2!=0){
//             for(int j=1;j<=i;j++){
//                 if(j%2!=0){
//                     cout<<"1";
//                 }
//                 else{
//                     cout<<"0";
//                 }
                
//             }

//         }
//         else{
//            for(int j=1;j<=i;j++){
//                 if(j%2!=0){
//                     cout<<"0";
//                 }
//                 else{
//                     cout<<"1";
//                 }
                
//             } 
//         }
//         cout<<endl;
//     }
//     return 0;

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         for(int j=i+1;j<=2*n-i;j++){
//             cout<<" ";
//         }
//         for(int j=i;j>=1;j--){
//             cout<<j;
//         }
//         cout<<endl;

//     }
//     for(int i=n;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         for(int j=i;j>=1;j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int count = 0;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             count++;
//             cout<<count<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
   
//     for(int i=1;i<=n;i++){
//          int count = 65;
//         for(int j=1;j<=i;j++){
//             cout<<(char)count;
//             count++;
//         }
//         cout<<endl;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
   
//     for(int i=n;i>=1;i--){
//          int count = 65;
//         for(int j=1;j<=i;j++){
//             cout<<(char)count;
//             count++;
//         }
//         cout<<endl;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int count = 65;
//     for(int i=1;i<=n;i++){
        
//         for(int j=1;j<=i;j++){
//             cout<<(char)count;
//         }
//         cout<<endl;
//         count++;
//     }
// }


