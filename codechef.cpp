// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//         int y1,k;
//         int h1,x1;
//         int y3;
        
//         cin>>h1>>x1>>y1>>y3>>k;
//         float h = static_cast<float>(h1);
//         float x = static_cast<float>(x1);
//         float y2 = static_cast<float>(y3);
//         float r1;
//         r1 = h/x;
//         r1 = ceil(r1);
        
//         int count =0;
//         int cnt =0;
        
//        if(x<y1){
            
        
//         for(int i=0;i<k;i++){
//             cnt = cnt+ y1;
//             if(cnt>=h){
//                 cout<<i+1<<endl;
//                 break;

//             }
            
//         }
        
//         }
        
//         float temp;
//         temp = h - cnt;
//         float res2;
//         res2 = temp/y2;
//         res2 = ceil(res2) + k;
//         int g = 0;
        
//         // if(x<y1){
            
        
//         // for(int i=0;i<k;i++){
//         //     cnt = cnt+ y1;
//         //     if(cnt>=h){
//         //         cout<<i+1<<endl;
//         //         break;

//         //     }
            
//         // }
        
//         // }
//         // if(cnt>=h){
//         //     break;
//         // }
        
//         if(r1<res2 && cnt<=h){
//             cout<<r1<<endl;
//         }
//         else if(res2<r1 && cnt<=h){
//             cout<<res2<<endl;
//         }
        
        
        
//     }


// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;cin>>t;
    
//     while(t--)
//     {
//     int h,x,y1,y2,k;
//     cin>>h>>x>>y1>>y2>>k;
//     int t1=(h/x)+(h%x==0?0:1);
//     int t2=0;
//     if(y1*k>=h) {t2=(h/y1)+(h%y1==0?0:1);}
//     else{
//         t2+=k;
//         h-=(y1*k);
//         t2+=(h/y2)+(h%y2==0?0:1);
//     }
//     cout<<min(t1,t2)<<endl;
//     }
// }

//1408
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//         long n;
//         cin>>n;
//         long arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//  
//  
//         sort(arr,arr+n);
//         // for(int i=0;i<n;i++){
//         //     cout<<arr[i]<<" ";
//         // }
        
//             long sum = 0;
//             for(int i=n-1;i>=0;i=i-2){
//                 sum = sum + arr[i];
                
//             }
//             cout<<sum;
        
//     }
// }

//1171
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         sort(arr,arr+n);
//         vector<int> v;
//         int count = 1;
//         for(int i=0;i<n;i++){
//             if(arr[i] == arr[i+1]){
//                 count++;
//             }
//             else{
//                 v.push_back(count);
//                 count = 1;
//             }
//         }
//         sort(v.begin(),v.end());
//         int pl = v.size();
//         int temp =0;
//         for(int i=0;i<v.size();i++){

//             if(v[i] == v[i+1] && v[i] == v[pl-1]){
//                 cout<<"NO"<<endl;
//                 break;
//             }
//             else{
//                 temp++;
//             }
//         }
//         if(temp == v.size()){
//             cout<<"YES"<<endl;
//         } 
//     }
// }

//rating -1000
// #include<bits/stdc++.h>
// using namespace std;
// bool isVowel(char ch){
//     return (ch == 'a'|| ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u');
// }
// bool isConsonant(char ch){
//     return (isalpha(ch) && !isVowel(ch));
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//         int n;
//         string s;
//         cin>>n;
//         cin>>s;
//         int count = 0;
//         int ct = 0;
//         for(int i=0;i<n;i++){
//             if(isConsonant(s[i])){
//                 count++;

//             }
//             else if(isVowel(s[i])){
//                 if(count>=4){
//                     cout<<"NO"<<endl;
//                     ct++;
//                     break;
//                 }
//                 count = 0;
//                 continue;

//             }
//         }
//         if(count>=4 && ct!=1){
//             cout<<"NO"<<endl;
//         }
//         else if(count<=4 && ct!=1){
//             cout<<"YES"<<endl;
//         }

//     }
// }

//rating -1001
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//         int n,k;
//         cin>>n>>k;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
        
//         for(int i=0;i<n;i++){
//             if(arr[i]<=k){
//                 cout<<"1";
//                 k = k-arr[i];
//             }
//             else{
//                 cout<<"0";
//             }

//         }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//     int a,b;
//     cin>>a>>b;
//     int count = 0;
//     int r;
//     r = a+b+1;
//     while(r>0){
//     for(int i=1;i<=r;i++){
        
//         if((r)%i == 0){
//             count++;
//         }    
//     }
//     if(count == 2){
//         int res;
//         res = r -(a+b);
//         cout<<res<<endl;
//         break;
//     }
//     else{
//         count = 0;
//     }
//     r++;
//     }
//     } 
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     if(a+b == 2){
//         cout<<"yes";
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	for(int i=0;i<t;i++){
// 	    int a,b,c,d,e;
// 	    cin>>a>>b>>c>>d>>e;
//         vector<int> v;
//         v.push_back(a);
//         v.push_back(b);
//         v.push_back(c);
//         v.push_back(d);
//         v.push_back(e);
//         int count =0;
//         for(int i=0;i<v.size();i++){
//             if(v[i] == 1){
//                 count++;
//             }
//         }
//         if(count>=4){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
        
	    
// 	}
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	for(int i=0;i<t;i++){
// 	    int n,k;
// 	    cin>>n>>k;
// 	    int arr[n];
// 	    for(int i=0;i<n;i++){
// 	        cin>>arr[i];
	        
// 	    }
// 	    int count = 0;
// 	    vector<int> v;
// 	    for(int i=0;i<n;i++){
// 	        int temp;
// 	        temp = arr[i]/k;
// 	        if(temp>=1){
// 	            int sa;
// 	            sa = arr[i]%k;
// 	            v.push_back(sa);
// 	        }
// 	        else{
// 	            count++;
// 	        }
// 	    }
//         if(count == n){
//             cout<<-1<<endl;
//         }
//         else{
//             sort(v.begin(),v.end());
//         cout<<v[0]<<endl;
//         }
        

// 	}

// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	for(int i=0;i<t;i++){
// 	    int n,q;
// 	    cin>>n>>q;
// 	    string s;
//         cin>>s;
//         char arr[q];
//         for(int i=0;i<q;i++){
//             cin>>arr[i];
//         }
//         int count = 1;
//         vector<int> v;
//         int checkcnt = INT_MIN;
//         for(int i=0;i<s.size();i++){
//             if(s[i] == s[i+1]){
//                 count++;
//             }
//             else{
//                 v.push_back(count);
                
//                 count = 1;
//             }
//         }
//         int temsi;
//         temsi = v.size()-1;
//         sort(v.begin(),v.end());
//         cout<<v[temsi]<<" ";
        
//         for(int i=0;i<q;i++){
//             s = s + arr[i];
//             vector<int> v1;
//             int cnt = 1;
//             for(int i=0;i<s.size();i++){
//             if(s[i] == s[i+1]){
//                 cnt++;
//             }
//             else{
//                 v1.push_back(cnt);
//                 cnt = 1;
//             }

//         }
//         int tems;
//         tems = v1.size()-1;
//         sort(v1.begin(),v1.end());
//         cout<<v1[tems]<<" ";
//         }
//         cout<<endl;
	    
// 	}

// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//         int x,y;
//         cin>>x>>y;
//         int res;
//         if(x <= y){
//             cout<<0;
           
//         }
//         else{
//             cout<<x-y;
//         }
    
//         cout<<endl;
        
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	for(int i=0;i<t;i++){
// 	    int n,x;
// 	    cin>>n>>x;
// 	    vector<int> v,res;
//         res.push_back(x);
// 	    for(int i=0;i<n;i++){
// 	        int a;
// 	        cin>>a;
// 	        v.push_back(a);
// 	    }
// 	    for(int i=0;i<n;i++){
// 	        x = x + v[i];
// 	        res.push_back(x);
	        
// 	    }
// 	    sort(res.begin(),res.end());
// 	    cout<<res[res.size()-1]<<endl;
       
// 	}

// }



// #include<bits/stdc++.h>
// using namespace std;
// void gaussian(vector<vector<double>> &aug){
//     int n = aug.size();
//     for(int i=0;i<n;i++){
//         double fact = aug[i][i];
//         for(int j=0;j<n+1;j++){
//             aug[i][j] = (aug[i][j])/fact;
//         }
//         for(int k=0;k<n;k++){
//             if(k!=i){
//                 double factor = aug[k][i];
//                 for(int j=0;j<n+1;j++){
//                     aug[k][j] -= factor*aug[i][j]; 
//                 }
//             }
//         }
//     }
// }
// int main(){
//     vector<vector<double>> aug = {
//         {2,1,1,7},
//         {1,2,1,8},
//         {1,1,2,9}
//     };
//     gaussian(aug);
//     for(int i=0;i<aug.size();i++){
//         cout<<aug[i][3]<<" ";
//     }

// }

// #include<bits/stdc++.h>
// using namespace std;
// void gaussian(vector<vector<double>> &aug){
//     int n = aug.size();
//     for(int i=0;i<n;i++){
//         double factor = aug[i][i];
//         for(int j=0;j<n+1;j++){
//             aug[i][j] /=factor;
//         }
//         for(int k=0;k<n;k++){
//             if(k!=i){
//                 double fact = aug[k][i];
//                 for(int j=0;j<n+1;j++){
//                     aug[k][j]-=fact*aug[i][j];
//                 }
//             }
//         }

//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//     vector<vector<double>> aug = {
//         {2,1,1,1,13},
//         {1,2,1,1,15},
//         {1,1,2,1,13},
//         {1,1,1,2,14},
//         // {2,1,25},
//         // {1,2,20},

//     };
//     int x = aug.size();
//     gaussian(aug);
//     for(int i=0;i<aug.size();i++){
//         cout<<aug[i][x]<<" ";
//     }
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
   
// 	for(int i=0;i<t;i++){
// 	    int x,y;
// 	    cin>>x>>y;
// 	    while(x!=0){
//             int p = x;
//             if(x>y){
//                 int temp;
//                 temp = x;
//                 x = y;
//                 y = temp;
//             }
//             else{
//                 x = (y-x);
//                 y = p;
//             }
//         }
//         // fun(x,y);
//         cout<<y<<endl;
// 	}
	

// }

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	for(int i=0;i<t;i++){
//         int n;
//         cin>>n;
//         int arr[n];
//         // for(int i=1;i<=n;i++){
//         //     cin>>arr[i];
//         // }
//         int start = 1;
//         int end = n;
//         for(int i=1;i<=n;i++){
//             int temp = i;
            
//             int ct=0;
//             while(start<end){
//                 int sum;
//                 sum = start + end;
//                 if(start == temp){
//                     ct++;
                    
//                 }
//                 else if(sum == temp){
//                     ct++;
//                 }
//                 else if(end == temp){
//                     ct++;
//                 }
//                 if(sum>temp){
//                     end--;
//                 }
//                 else if(sum<temp){
//                     start++;
//                 }
//             }
//             cout<<ct;
//         }
	    
// 	}

// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
   
// 	for(int i=0;i<t;i++){
// 	    int x,y;
// 	    cin>>x>>y;
// 	    int a,b;
// 	    a = min(x,y);
// 	    b = max(x,y);
// 	    if(b%a == 0){
// 	        cout<<a<<endl;
// 	    }
// 	    else{
// 	        cout<<1<<endl;
// 	    } 
// 	}
// }


// #include <iostream>
// #include <queue>

// struct ThreadedNode {
//     int data;
//     ThreadedNode *left, *right;
//     bool isThreaded;
// };

// void fillQueue(ThreadedNode* root, std::queue<ThreadedNode*>* q) {
//     if (root == nullptr)
//         return;
//     if (root->left)
//         fillQueue(root->left, q);
//     q->push(root);
//     if (root->right)
//         fillQueue(root->right, q);
// }

// void createThreadedUtil(ThreadedNode* root, ThreadedNode*& prev) {
//     if (root == nullptr) {
//         return;
//     }

//     createThreadedUtil(root->left, prev);

//     if (prev != nullptr && prev->right == nullptr) {
//         prev->right = root;
//         prev->isThreaded = true;
//     }

//     prev = root;

//     createThreadedUtil(root->right, prev);
// }

// void createThreadedTree(ThreadedNode* root) {
//     std::queue<ThreadedNode*> q;
//     fillQueue(root, &q);
//     ThreadedNode* prev = nullptr;
//     createThreadedUtil(root, prev);
// }

// ThreadedNode* getLeftMost(ThreadedNode* root) {
//     while (root != nullptr && root->left != nullptr)
//         root = root->left;
//     return root;
// }

// void inOrderTraversal(ThreadedNode* root) {
//     if (root == nullptr)
//         return;

//     ThreadedNode* current = getLeftMost(root);

//     while (current != nullptr) {
//         std::cout << current->data << " ";

//         if (current->isThreaded)
//             current = current->right;
//         else
//             current = getLeftMost(current->right);
//     }
// }

// ThreadedNode* createThreadedNode(int data) {
//     ThreadedNode* newNode = new ThreadedNode;
//     newNode->left = newNode->right = nullptr;
//     newNode->data = data;
//     return newNode;
// }

// int main() {
//     ThreadedNode* root = createThreadedNode(1);
//     root->left = createThreadedNode(2);
//     root->right = createThreadedNode(3);
//     root->left->left = createThreadedNode(4);
//     root->left->right = createThreadedNode(5);
//     root->right->left = createThreadedNode(6);
//     root->right->right = createThreadedNode(7);

//     createThreadedTree(root);

//     std::cout << "Inorder traversal of created threaded tree is\n";
//     inOrderTraversal(root);

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//         int m;
//         cin>>m;
        // int min,max;
        // max = (m +1)/2;
        // min = max - (m%2);
        // cout<<max<<" "<<min<<endl;

        

        
//     }

// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     if(t>=1 && t<=100){
//         for(int i=0;i<t;i++){
//             int n;
//             cin>>n;
//             if(n>=1 && n<=1000){

//                 int min,max;
//                 max = (n +1)/2;
//                 min = max - (n%2);
//                 cout<<max<<" "<<min<<endl;
                
//             }

//         }
        
        
//     }
//     }
  


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int j=0;j<n;j++){
//             cin>>arr[j];
//         }
//         int count = 0;
//         for(int k=0;k<n;k++){
//             if(arr[k]>=1 && arr[k]<=10){
//                 if(arr[k]>4){
//                     count++;
//                 }
//             }
            
//         }
//         if(count == n){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
//     }


// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
//     if(t>=1 && t<=1000){
//         for(int i=0;i<t;i++){
//         vector<pair<int,int>> v;
//         for(int i=0;i<22;i++){
//             int a,b;
//             cin>>a>>b;
//             if(a>=0 && a<=200 && b>=0 && b<=10){

//                 v.push_back({a,b});

//             }
            
//         }
        

//         vector<int> v1;
//         for(int i=0;i<v.size();i++){
//             int res;
//             res = (1 * v[i].first) + (20 * v[i].second);
//             v1.push_back(res);
           

//         }
//         int max = v1[0];
        
//         vector<int> v2;
//         int temp = 0;
//         for(int i=0;i<v1.size();i++){
//             if(v1[i]>max){
//                 max = v1[i];
//                 v2.push_back(i);
//                 temp = i;
//             }

//         }
//         // if(!v2.empty()){
//         //     cout<<v2[v2.size()-1]+1<<endl;

//         // }
//         cout<<temp+1;
        
//     }
//     }

// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//         int n,m,x,y,l;
//         cin>>n>>m>>x>>y>>l;
//         int count =0;
//         for(int i=1;i<=m;i++){
//             if(i == m){
//                 count++;

//             }
//             else if(abs(i-y)%l == 0 ){
//                 count++;
//             }
//         }
//         int res;
//         if(n%2 == 0 || n==1){
//             res = (n/l)*count;

//         }
//         else{
//             res = (floor((n/l))*count) -1;
//         }
        
//         cout<<res;        
//     }
    
	

// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         int count =0;
//         for(int i=0;i<n;i++){
//             int res;
//             if(arr[i]%2 == 0){
//                 res = arr[i]/2;
//                 count = count + res;
                
//             }
//             else{
//                 res = (arr[i]/2)+1;
//                 count = count + res;
//             }
            
//         }
//         cout<<count<<endl;
//     }


// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> ans;
// 	int t;
// 	cin>>t;
//     for(int i=0;i<t;i++){
//         int n;
//         cin>>n;
//         int arr[n];
//         int count=0;
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         vector<int> v,v2;
//         int min1 = arr[1];
//         for(int i=0;i<n;i++){
//             if(arr[i]<min1){
//                 min1 = arr[i];
//             }
//         }
//         v.push_back(min1);
//         for(int i=0;i<n;i++){
//             if(arr[i]!=min1){
//                 v2.push_back(arr[i]);
//             }
//         }
//         int min2=v2[0];
//         for(int i=0;i<v2.size();i++){
//             if(v2[i]<min2){
//                 min2 = v2[i];
//             }
//         }
//         for(int i=0;i<v2.size();i++){
//             if(v2[i]!=min2){
//                 v.push_back(v2[i]);
//             }
//             if(v2[i] == min2){
//                 count++;
//             }
//         }
//         for(int i=0;i<count-1;i++){
//             v.push_back(min2);
//         }
//         v.push_back(min2);
//         for(int i=0;i<v.size();i++){
//             cout<<v[i]<<" ";
//         }
       
//         int sum=0;
//         for(int i=0;i<v.size()-1;i++){

//             sum = sum + v[i] + v[i+1];
//             ans.push_back(sum);
            
            
//         }
//         cout<<sum<<endl;
        
        
       


//     }

// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> ans;
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++) {
//         int n;
//         cin >> n;
//         int arr[n];
//         int cnt= 0,ct=0;
//         for (int i = 0; i < n; i++) { 
//             cin >> arr[i];
//         }
//         vector<int> v, v2;
//         int min1 = arr[0];
//         for (int i =0; i < n; i++) {
//             if (arr[i] < min1) {
//                 min1 = arr[i];
//             }
//         }
//         for (int i = 0; i <n; i++) {
//             if (arr[i] != min1) {
//                 v2.push_back(arr[i]);
//             }
//             if(arr[i] == min1){
//                 cnt++;
//             }
//         }
//         int min2 = v2[0];
//         for (int i = 0; i < v2.size(); i++) {
//             if (v2[i] < min2) {
//                 min2 = v2[i];
//             }
//         }

//         v.push_back(min1);



//         for (int i = 0; i < v2.size(); i++) {
//             if (v2[i] != min2 && v2[i]!=min1) {
//                 v.push_back(v2[i]);
//             }
//             if (v2[i] == min2) {
//                 ct++;
//             }
            
//         }
//         if(cnt>1){
//             for (int i = 0; i < cnt - 2; i++) {

//                 v.push_back(min1);
//         }
        

//         }
//         else{
//             for (int i = 0; i < cnt - 1; i++) {

//                 v.push_back(min1);
//         }

//         }
        
//         for (int i = 0; i < ct; i++) {
//             v.push_back(min2);
//         }

//         if(cnt>1){
//             v.push_back(min1);
//         }

//         // for(int i=0;i<v.size();i++){
//         //     cout<<v[i]<<" ";
//         // }

//         int sum = 0;
//         for (int i = 0; i < v.size() - 1; i++) {
//             sum = sum + v[i] + v[i + 1];
//             ans.push_back(sum);
//             if (i == v.size() - 2) {
//                 cout << sum << endl;
//             }
//         }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//         int n;
//         cin>>n;
//         int cnt1=0,cnt2=0;
//         int arr[n+1];
//         for (int i = 1; i <=n; i++) { 
//             cin >> arr[i];
//         }
//         int min1,min2;
//         min1 = numeric_limits<int>::max();
//         min2 = numeric_limits<int>::max();
//         for(int i=1;i<=n;i++){
//             if(arr[i]<min1){
//                 min2 = min1;
//                 min1 = arr[i];
//             }
//             else if(arr[i]<min2 && arr[i]!=min1){
//                 min2 = arr[i];
//             }

//         }
//         cout<<min1<<" "<<min2;
//         vector<int> v;
//         v.push_back(min1);
//         for(int i=1;i<=n;i++){
//             if(arr[i] != min1 && arr[i] != min2){
//                 v.push_back(arr[i]);
//             }
//             if(arr[i] == min1){
//                 cnt1++;
//             }
//             if(arr[i] == min2){
//                 cnt2++;
//             }
//         }
        
//         for(int i=0;i<cnt1-1;i++){
//             v.push_back(min1);
//         }
//         for (int i = 0; i < cnt2 - 1; i++) {
//             v.push_back(min2);
//         }
//         v.push_back(min2);
//         for(int i=0;i<v.size();i++){
//             cout<<v[i]<<" ";
//         }
//     }
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> ans;
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++) {
//         int n;
//         cin >> n;
//         int arr[n+1];
//         int cnt= 0,ct=0;
//         // for (int i = 0; i < n; i++) { 
//         //     cin >> arr[i];
//         // }
//         vector<int> v, v2;
//         int min1 = n;
//         for (int i =1; i <=n; i++) {
//             if (i < min1) {
//                 min1 = i;
//             }
//         }
//         for (int i = 1; i <=n; i++) {
//             if (i != min1) {
//                 v2.push_back(i);
//             }
//             if(i == min1){
//                 cnt++;
//             }
//         }
//         int min2 = n;
//         for (int i = 0; i < v2.size(); i++) {
//             if (v2[i] < min2) {
//                 min2 = v2[i];
//             }
//         }

//         v.push_back(min1);



//         for (int i = 0; i < v2.size(); i++) {
//             if (v2[i] != min2 && v2[i]!=min1) {
//                 v.push_back(v2[i]);
//             }
//             if (v2[i] == min2) {
//                 ct++;
//             }
            
//         }
//         if(cnt>1){
//             for (int i = 0; i < cnt - 2; i++) {

//                 v.push_back(min1);
//         }
        

//         }
//         else{
//             for (int i = 0; i < cnt - 1; i++) {

//                 v.push_back(min1);
//         }

//         }
        
//         for (int i = 0; i < ct; i++) {
//             v.push_back(min2);
//         }

//         if(cnt>1){
//             v.push_back(min1);
//         }

//         for(int i=0;i<v.size();i++){
//             cout<<v[i]<<" ";
//         }
        
//         for(int i=0;i<v.size()-1;i++){
//             int a;
//             a = min(v[i],v[i+1]);
//             ans.push_back(&a);



//         }
//         ans.push_back(v[0],v[v.size()-1]);
//         for(int i=0;i<ans.size();i++){
//             cout<<ans[i]<<" ";
//         }

//         // int sum = 0;
//         // for (int i = 0; i < v.size() - 1; i++) {
//         //     sum = sum + v[i] + v[i + 1];
//         //     ans.push_back(sum);
//         //     if (i == v.size() - 2) {
//         //         cout << sum << endl;
//         //     }
//         // }

//     }
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> ans;
//     int t;
//     cin >> t;
    
//     for (int i = 0; i < t; i++) {
//         int n;
//         cin >> n;
//         int arr[n + 1];
//         int cnt = 0, ct = 0;

//         vector<int> v, v2;

//         int min1 = n;
//         for (int i = 1; i <= n; i++) {
//             if (i < min1) {
//                 min1 = i;
//             }
//         }

//         for (int i = 1; i <= n; i++) {
//             if (i != min1) {
//                 v2.push_back(i);
//             }
//             if (i == min1) {
//                 cnt++;
//             }
//         }

//         int min2 = n;
//         for (int i = 0; i < v2.size(); i++) {
//             if (v2[i] < min2) {
//                 min2 = v2[i];
//             }
//         }

//         v.push_back(min1);

//         for (int i = 0; i < v2.size(); i++) {
//             if (v2[i] != min2 && v2[i] != min1) {
//                 v.push_back(v2[i]);
//             }
//             if (v2[i] == min2) {
//                 ct++;
//             }
//         }

//         if (cnt > 1) {
//             for (int i = 0; i < cnt - 2; i++) {
//                 v.push_back(min1);
//             }
//         } else {
//             for (int i = 0; i < cnt - 1; i++) {
//                 v.push_back(min1);
//             }
//         }

//         for (int i = 0; i < ct; i++) {
//             v.push_back(min2);
//         }

//         if (cnt > 1) {
//             v.push_back(min1);
//         }

//         for (int i = 0; i < v.size(); i++) {
//             cout << v[i] << " ";
//         }

//         for (int i = 0; i < v.size() - 1; i++) {
//             int a;
//             a = min(v[i], v[i + 1]);
//             ans.push_back(a);
//         }
//         int b = min(v[0],v[v.size() - 1]);
//         ans.push_back(b);
//         int finalsum = 0;
        

       
//         for (int i = 0; i < ans.size(); i++) {
//             finalsum +=ans[i];
            
//         }

//         cout <<finalsum<< endl;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//         int n;
//         cin>>n;
        
//         int sum = 0;
//         for(int i=1;i<n;i++){
//             int b;
//             b = min(i,i+1);
//             sum = sum + b;

//         }
//         int a;
//         a = min(1,n);
//         sum = sum + a;
        
        
//         cout<<sum<<endl;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> ans;
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++) {
//         int n;
//         cin >> n;
//         int arr[n];
//         int cnt= 0,ct=0;
//         for (int i = 0; i < n; i++) { 
//             cin >> arr[i];
//         }
//         vector<int> v, v2;
//         int min1 = arr[0];
//         for (int i =0; i < n; i++) {
//             if (arr[i] < min1) {
//                 min1 = arr[i];
//             }
//         }
//         for (int i = 0; i <n; i++) {
//             if (arr[i] != min1) {
//                 v2.push_back(arr[i]);
//             }
//             if(arr[i] == min1){
//                 cnt++;
//             }
//         }
//         int min2 = v2[0];
//         for (int i = 0; i < v2.size(); i++) {
//             if (v2[i] < min2) {
//                 min2 = v2[i];
//             }
//         }

//         v.push_back(min1);



//         for (int i = 0; i < v2.size(); i++) {
//             if (v2[i] != min2 && v2[i]!=min1) {
//                 v.push_back(v2[i]);
//             }
//             if (v2[i] == min2) {
//                 ct++;
//             }
            
//         }
//         if(cnt>1){
//             for (int i = 0; i < cnt - 2; i++) {

//                 v.push_back(min1);
//         }
        

//         }
//         else{
//             for (int i = 0; i < cnt - 1; i++) {

//                 v.push_back(min1);
//         }

//         }
        
//         for (int i = 0; i < ct; i++) {
//             v.push_back(min2);
//         }

//         if(cnt>1){
//             v.push_back(min1);
//         }

//         // for(int i=0;i<v.size();i++){
//         //     cout<<v[i]<<" ";
//         // }

//         int sum = 0;
//         for (int i = 0; i < v.size() - 1; i++) {
//             sum = sum + v[i] + v[i + 1];
//             ans.push_back(sum);
//             if (i == v.size() - 2) {
//                 cout << sum << endl;
//             }
//         }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// vector<int> bin(int n){
//     int rem,temp;
//     vector<int> v;
//     while(n!=0){
//     rem = n%2;
    
//     n = n/2;
//     v.push_back(rem);

//     }
//     return v;
    
    


// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//         int n;
//         cin>>n;
//         vector<int> v,temp;

//         v = bin(n);
//         for(int i=v.size()-1;i>=0;i--){
//             temp.push_back(v[i]);
            
//         }
//         int count=0;
//         for(int i=0;i<temp.size();i++){
//             if(v[i] == 1){
//                 count++;

//             }
//         }
//         if(count%2==0){
//             cout<<"EVEN"<<endl;
//         }
//         else{
//             cout<<"ODD"<<endl;
//         }
//     }
// }




 // int one,two,three;
        // one = min(max1,max2);
        // int temp1 = one;
        // one = one*2;
        // two = max1*1;
        // three = max2*1;
        // int res;

        // if((one/2)<=max2){

        //     res = max(one,two);
        //     res = max(res,three);

        // }
        // else{
        //     res = max(two,three);
        // }


        // cout<<sim<<endl;
        // cout<<temphash<<endl;
        // cout<<tempmax<<endl;


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
    vector<int> v;
    for(int i=0;i<t;i++){
        int n;
        int hash1[max+1] = {0};
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int max1 = INT_MIN,min1=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]<min1){
                min1 = arr[i];
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]>max1){
                max1 = arr[i];
            }
            

        }
            int max2 = INT_MIN;
        for(int i=0;i<n;i++){
            if((arr[i]!=max1) && arr[i]>max2){
                max2 = arr[i];
            }

        }
        int hash[max1+1] = {0};
        for(int i=0;i<n;i++){
            hash[arr[i]]++;
            
        }
        int temphash;
        int tempmax = INT_MIN,tempcnt=0;
        int varte=0;
        for(int i=0;i<max1+1;i++){
            if(hash[i]>1){
                tempcnt++;
            }
            // if(hash[i] == tempmax){
            //     varte++;


            // }
            if(hash[i]>tempmax){
                
                tempmax = hash[i];
                hash1[tempmax]++;
                temphash = i;
            }


        }
        
        
        int sim = 1;
        for(int i=0;i<n-1;i++){
            if(arr[i] == arr[i+1]){
                sim++;


            }
        }
        int res;
        
        if(tempcnt>0 && ((temphash*(tempmax))>max1 ) && sim!=n && (temphash<max1)){
            res = temphash*(tempmax+1);
        }
        else if(tempcnt>0 && ((temphash*(tempmax))>max1 ) && sim!=n && (temphash>=max1) && varte>0){
            res = temphash*(tempmax+1);
        }
        else if(tempcnt>0 && ((temphash*(tempmax))>max1 ) && sim!=n && (temphash>max1) && tempmax!=max1 && varte==0){
            res = temphash*(tempmax);
        }
        

        else if(sim == n){
            res = max1*sim;
        }
        else{
            res = max(max2*2,max1);
        }
        
        cout<<tempmax<<endl;
        cout<<res<<endl;
        
    }
}
