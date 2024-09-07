//pairs

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     pair<int,int> p = {1,2};
//     cout<<p.first<<" "<<p.second<<endl;
//     pair<int,pair<int,int>> pa = {1,{2,3}};
//     cout<<pa.first<<" "<<pa.second.first<<" "<<pa.second.second<<endl;
//     pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
//     cout<<arr[1].first;
// }

//vectors
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> v;
//     v.push_back(3);
//     v.emplace_back(4);
//     cout<<v[0]<<" "<<v[1]<<endl;

//     vector<int> ve(5,100);
//     cout<<ve[2]<<endl;

//     vector<int> vec(5);
//     cout<<vec[2]<<endl;

//     vector<int> v1;
//     for(int i=0;i<5;i++){
//         int a;
//         cin>>a;
//         v1.push_back(a);
//     }
//     vector<int>::iterator it = v1.begin();
//     cout<<*(it)<<endl;

//     vector<int>::iterator ite = v1.end();
//     ite = ite - 1;
//     cout<<*(ite)<<endl;
//     cout<<v1.back()<<endl;

//     for(vector<int>::iterator iter=v1.begin();iter!=v1.end();iter++){
//         cout<<*(iter)<<" ";
//     }
//     // vector<int>::iterator is equal to auto
    
//     v1.erase(v1.begin() + 1);
//     v1.erase(v1.begin(),v1.begin()+2);
//     for(vector<int>::iterator ite=v1.begin();ite!=v1.end();ite++){
//         cout<<endl<<*(ite)<<" ";
//     }

//     v1.insert(v1.begin(),1);
//     v1.insert(v1.begin()+1,2,2);
//     for(auto ite=v1.begin();ite!=v1.end();ite++){
//         cout<<endl<<*(ite)<<" ";
//     }
//     vector<int> ve1(2,10);
//     v1.insert(v1.begin(),ve1.begin(),ve1.end());
//     for(auto ite=v1.begin();ite!=v1.end();ite++){
//         cout<<endl<<*(ite)<<" ";
//     }
    
//     cout<<v1.size()<<endl;

//     v1.pop_back();

//     for(auto ite=v1.begin();ite!=v1.end();ite++){
//         cout<<endl<<*(ite)<<" ";
//     }

//     cout<<v1.empty();


// }

// list and deque are similar to vectors but in list push_front and push_back operations takes less time than vectors
//stack - push(),pop(),top()
//queue - push(),pop(),front(),back()

// max priority queue

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     priority_queue<int>p;
//     p.push(2);
//     p.push(9);
//     p.push(6);
//     cout<<p.top()<<" ";
//     p.pop();
//     cout<<p.top();
// }

// min priority queue
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     priority_queue<int,vector<int>,greater<int>> p;
//     p.push(9);
//     p.push(5);
//     p.push(6);
//     cout<<p.top();
// }

// set - all elements are sorted and unique
// insert(),find(),erase()[first,last),count(),lowerbound(),upperbound()

// Multiset - all elements are sorted but not unique
//same as set

// UNordered set - all elements are unique but not sorted
//lowerbound() and upperbound() does not work rest all functions are same
// its time complexity is better than set in  most cases

// Map
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     map<int,int> mpp;
//     mpp[1] = 2;
//     cout<<mpp[1]<<" ";
//     mpp.insert({2,3});
//     for(auto it:mpp){
//         cout<<it.first<<" "<<it.second<<" ";
//     }
//     cout<<*(iter).first;
// }

// Multimap - same as map but it stores multiple keys

// Unordered map - same as map but keys will not be in order
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> adj_list[n];
    adj_list[0].push_back(1);
    adj_list[1].push_back(0);
    adj_list[0].push_back(3);
    adj_list[3].push_back(0);
    adj_list[0].push_back(4);
    adj_list[3].push_back(5);
    adj_list[5].push_back(3);
    adj_list[3].push_back(4);
    adj_list[4].push_back(3);
    adj_list[1].push_back(3);
    adj_list[3].push_back(1);
    adj_list[1].push_back(2);
    adj_list[2].push_back(1);
    adj_list[2].push_back(3);
    adj_list[3].push_back(2);
    adj_list[4].push_back(7);
    adj_list[7].push_back(4);
    adj_list[4].push_back(6);
    adj_list[6].push_back(4);
    adj_list[7].push_back(8);
    adj_list[8].push_back(7);
    adj_list[6].push_back(8);
    adj_list[8].push_back(6);
    adj_list[4].push_back(0);
    queue<int> q;
    vector<bool> visited(n,false);
    visited[0]=true;
    q.push(0);
    vector<int> bfs;
    while(!q.empty()){
        int vertex=q.front();
        q.pop();
        bfs.push_back(vertex);
        for(auto element:adj_list[vertex]){
            if(!visited[element]){
                visited[element]=true;
                q.push(element);
            }
        }
    }
    auto it=find(bfs.begin(),bfs.end(),8);
    if(it!=bfs.end()){
        cout<<"Path exists from"<<endl<<0<<endl<<"to"<<endl<<8<<endl;
    }
    else{
        cout<<"No path"<<endl;
    }
}
