//Bubble Sort 
// #include<bits/stdc++.h>
// using namespace std;
// void swap(int &a,int &b){
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;

// }
// int main()
// {
//     int n;
//     cout<<"enter the no of numbers you want:";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=n-1;i>=1;i--){
        
//         for(int j=0;j<=i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }

//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// } 

#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n-1;i++){
        for(int j=i;j>=0;j--){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}