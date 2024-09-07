// 1.
// #include<bits/stdc++.h>
// using namespace std;
// vector<char> dfs(char v,vector<char> adj[],char root){
//     vector<char> vis(v+1,0);
//     stack<char> s;
//     s.push(root);
//     vector<char> ans;
//     while(s.size()!=0){
//         char t;
//         t = s.top();
//         s.pop();
//         if(vis[t]==1){
//             continue;
//         }
//         ans.push_back(t);
//         vis[t] = 1;
//         for(auto it:adj[t]){
//             if(vis[it] == 0){
//                 s.push(it);
//             }
//         }
        

//     }
//     return ans;
// }
// void addedge(vector<char> adj[],char x,char y){
//     adj[x].push_back(y);
//     adj[y].push_back(x);
// }
// char main(){
//     char v,e;
//     cin>>v>>e;
//     vector<char> adj[v+1];
//     addedge(adj,1,2);
//     addedge(adj,1,3);
//     addedge(adj,2,4);
//     addedge(adj,2,5);
//     addedge(adj,4,5);
//     char root;
//     cin>>root;
//     vector<char> ans = dfs(v,adj,root);
//     for(char i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
// }
2.
#include<bits/stdc++.h>
using namespace std;
vector<char> dfs(vector<char> adj[],char v,char root,vector<char> te1,vector<char> te2){
    stack<char> s;
    vector<char> vis(v,0);
    vector<char> ans;
    
    int temp = 0;
    s.push(root);
    while(s.size()!=0){
        char t;
        t = s.top();
        s.pop();
        if(vis[t-'a'] == 1){
            continue;
        }
        vis[t-'a'] = 1;
        
        ans.push_back(t);
        te1.push_back(t);
        for(auto it:adj[t-'a']){
            if(vis[it-'a'] == 0){
                s.push(it);
            }
        }
        temp++;

    }
    s.push(97+temp);
    while(s.size()!=0){
        char t;
        t = s.top();
        s.pop();
        if(vis[t-'a'] == 1){
            continue;
        }
        vis[t-'a'] = 1;
        
        ans.push_back(t);
        te2.push_back(t);
        for(auto it:adj[t-'a']){
            if(vis[it-'a'] == 0){
                s.push(it);
            }
        }
        temp++;

    }
    return ans,te1,te2;
}
void addedge(vector<char> adj[],char x,char y){
    adj[x-'a'].push_back(y);
    
}
int main(){
    int v,e;
    cin>>v>>e;
    vector<char> adj[v];
    vector<char> te1,te2;
    addedge(adj,'a','b');
    addedge(adj,'b','c');
    addedge(adj,'c','a');
    addedge(adj,'b','d');
    addedge(adj,'d','e');
    addedge(adj,'e','f');
    addedge(adj,'f','e');
    addedge(adj,'g','e');
    addedge(adj,'h','f');
    addedge(adj,'g','h');
    addedge(adj,'h','i');
    addedge(adj,'i','j');
    addedge(adj,'j','g');
    addedge(adj,'j','h');
    char root;
    cin>>root;
    dfs(adj,v,root,te1,te2);
    for(char i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    stack<char> st;
    for(char i=te1.size()-1;i>=0;i--){
        st.push(te1[i]);
        
    }
    for(char i=te2.size()-1;i>=0;i--){
        st.push(te2[i]);
        
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }


}


#include<bits/stdc++.h>
using namespace std;
bool sort_by_sec(pair<int,int>&a,pair<int,int>&b){
    return (float(a.second)/float(a.first)>float(b.second)/float(b.first));
}
int main(){
    int n,sack_weight;
    cin>>n>>sack_weight;
    vector<pair<int,int>> items;
    for(int i=0;i<n;i++){
        int w,v;
        cin>>w>>v;
        items.push_back({w,v});
    }
    sort(items.begin(),items.end(),sort_by_sec);
    int tree_size=pow(2,n+1)-1;
    vector<pair<pair<int,int>,int>> state_space(tree_size,{{0,0},0});
    priority_queue<pair<pair<int,int>,int>,vector<pair<pair<int,int>,int>>,greater<pair<pair<int,int>,int>>> pq;
    vector<vector<bool>> path(tree_size,vector<bool>(n,true));
    state_space[0]={{0,0},0};
    pq.push({{0,0},0});
    int global_upper=INT_MAX;
    vector<bool> result;
    while(!pq.empty()){
        int node=pq.top().second;
        int lower_bound=pq.top().first.first;
        int upper_bound=pq.top().first.second;
        int level=state_space[node].second;
        pq.pop();
        if(upper_bound<=global_upper){
            result=path[node];
        }
        if(lower_bound<=global_upper && 2*node+2<tree_size){
            //left node
            path[2*node+1]=path[node];
            int l=0,u=0;
            int weight=0;
            int i;
            for(i=0;i<n;i++){
                if(path[2*node+1][i] && weight+items[i].first<=sack_weight){
                    weight+=items[i].first;
                    l+=items[i].second,u+=items[i].second;
                }
                else{
                    break;
                }
            }
            if(i!=n-1){
                i++;
                l+=(sack_weight-weight)*(float(items[i].second)/float(items[i].first));
            }
            l=-l,u=-u;
            state_space[2*node+1]={{l,u},level+1};
            pq.push({{l,u},2*node+1});
            if(u<global_upper){
                global_upper=u;
            }
            //right node
            path[2*node+2]=path[node];
            path[2*node+2][level]=false;
            l=0,u=0,weight=0;
            for(i=0;i<n;i++){
                if(path[2*node+2][i] && weight+items[i].first<=sack_weight){
                    weight+=items[i].first;
                    l+=items[i].second,u+=items[i].second;
                }
                else if(path[2*node+2][i]==false){
                    continue;
                }
                else{
                    break;
                }
            }
            if(i!=n-1){
                i++;
                l+=(sack_weight-weight)*(float(items[i].second)/float(items[i].first));
            }
            l=-l,u=-u;
            state_space[2*node+2]={{l,u},level+1};
            pq.push({{l,u},2*node+2});
            if(u<global_upper){
                global_upper=u;
            }
        }
    }
    cout<<"Maximum Value: "<<-global_upper<<endl;
    for(auto element:result){
        cout<<element<<" ";
    }
    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;
// struct Node{
//     string data;
//     Node* left,*right;
//     bool rightThread;
//     bool leftThread;
//     Node(string s)
//     {
//         data=s;
//         left=NULL;
//         right=NULL;
//         rightThread=true;
//         leftThread=true;
//     }
// };
// Node* insertion(Node* &root,string s,bool choise)
// {
//    Node* node= new Node(s);
   
//    if(choise==0)
//    {
//        node->left=root->left;
//        node->right=root;
//        root->leftThread=false;
//        root->left=node;
//    }
//    else if(choise==1)
//    {
//     node->left=root;
//     node->right=root->right;
//     root->rightThread=false;
//     root->right=node;
//    }
//    return node;
// }
// void findChildren(Node* root,string s,Node* &ans)
// {
//     if(root==NULL) return;
//     if(root->data==s) ans=root;
//     if(root->leftThread && root->rightThread) return;
//     if(!root->leftThread) findChildren(root->left,s,ans);
//     if(!root->rightThread) findChildren(root->right,s,ans);
//     return;
// }
// void findParent(Node* root,Node* prev,string s,Node* &ans)
// {
//     if(root==NULL) return;
//     if(root->data==s) ans=prev;
//     if(root->leftThread && root->rightThread) return;
//     if(!root->leftThread) {
//         findParent(root->left,root,s,ans);}
//     if(!root->rightThread) {
//         findParent(root->right,root,s,ans);}
//     return;
// }
// void findSubTree(Node* root,string s)
// {
//     queue<pair<Node*,int>>q;
//     q.push({root,0});
//     while(!q.empty())
//     {
//         int size=q.size();
//         for(int i=0;i<size;i++)
//         {
//             Node* node=q.front().first;
//             int check=q.front().second;
//             Node* node1=NULL;
//             Node* node2=NULL;
//             if(node->leftThread!=1)
//             {
//                 if(node->data==s || check==1)
//                 {node1=node->left;
//                 q.push({node1,1});}
//                 else q.push({node->left,0});
//             }
//             if(node->rightThread!=1)
//             {
//                 if(node->data==s || check==1)
//                 {node2=node->right;
//                 q.push({node2,1});}
//                 else q.push({node->right,0});
//             }
//             if((node1!=NULL || node2!=NULL) && check==1)
//             {
//                 cout<<node->data<<" leads ";
//                 if(node1!=NULL) cout<<node1->data<<" ";
//                 if(node2!=NULL) cout<<node2->data<<" ";
//                 cout<<endl;
//             }
//             q.pop();
//         }
//     }
// }
// int main()
// {

//     Node* root=new Node("Project Manager");
//     root->left=root;
//     root->right=root;
//     root->left=insertion(root,"Hardware Lead",0);
//     root->right=insertion(root,"Software Lead",1);
//     root->left->left=insertion(root->left,"Engineer 1",0);
//     root->left->right=insertion(root->left,"Engineer 2",1);
//     root->right->left=insertion(root->right,"Line Lead 1",0);
//     root->right->right=insertion(root->right,"Line Lead 2",1);
//     root->left->left->left=insertion(root->left->left,"Assistant Engineer 1",0);
//     root->left->right->left=insertion(root->left->right,"Assistant Engineer 2",0);
//     root->left->right->right=insertion(root->left->right,"Assistant Engineer 3",1);
//     root->right->left->left=insertion(root->right->left,"Assistant Line Leader 1",0);
//     root->right->left->right=insertion(root->right->left,"Assistant Line Leader 2",1);
//     root->right->right->right=insertion(root->right->right,"Assistant Line Leader 3",1);
    
//     string s2;
//     Node* ans1=NULL;
//     getline(cin,s2);
//     findParent(root,NULL,s2,ans1);
//     if(ans1!=NULL)
//     cout<<ans1->data;
//     cout<<endl;
//     Node* ans2=NULL;
//     getline(cin,s2);
//     findChildren(root,s2,ans2);
//     if(ans2->leftThread!=1) cout<<ans2->left->data<<" ";
//     if(ans2->rightThread!=1) cout<<ans2->right->data;
//     cout<<endl;
//     getline(cin,s2);
//     findSubTree(root,s2);
// }



#include <iostream>

struct Node {
    int data;
    Node* left;
    Node* right;
    bool leftThread;
    bool rightThread;

    Node(int data) : data(data), left(nullptr), right(nullptr), leftThread(true), rightThread(true) {}
};

// Function to insert a node into the binary tree
Node* insert(Node*& root, int data) {
    if (root == nullptr) {
        return new Node(data);
    }

    if (data < root->data) {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }

    return root;
}

// Function to convert the binary tree to a threaded binary tree
void convertToThreaded(Node*& root, Node*& prev) {
    if (root == nullptr) {
        return;
    }

    convertToThreaded(root->left, prev);

    // Set left thread
    if (root->left == nullptr) {
        root->leftThread = true;
        root->left = prev;
    }

    // Set right thread
    if (prev != nullptr && prev->right == nullptr) {
        prev->rightThread = true;
        prev->right = root;
    }

    prev = root;

    convertToThreaded(root->right, prev);
}

// Function to perform inorder traversal of the threaded binary tree
void inorderTraversal(Node* root) {
    Node* current = root;

    // Find the leftmost node
    while (current != nullptr && !current->leftThread) {
        current = current->left;
    }

    while (current != nullptr) {
        std::cout << current->data << " ";

        if (current->rightThread) {
            current = current->right;
        } else {
            current = current->right;

            // Move to the leftmost node of the right subtree
            while (current != nullptr && !current->leftThread) {
                current = current->left;
            }
        }
    }
}

int main() {
    Node* root = nullptr;

    // Construct the binary tree
    root = insert(root, 5);
    insert(root, 2);
    insert(root, 7);
    insert(root, 1);
    insert(root, 4);
    insert(root, 6);
    insert(root, 9);
    insert(root, 3);
    insert(root, 8);
    insert(root, 10);

    Node* prev = nullptr;
    // Convert the binary tree to a threaded binary tree
    convertToThreaded(root, prev);

    // Perform inorder traversal of the threaded binary tree
    inorderTraversal(root);

    return 0;
}






#include<bits/stdc++.h>
using namespace std;
bool sort_by_sec(pair<int,int>&a,pair<int,int>&b){
    return (float(a.second)/float(a.first)>float(b.second)/float(b.first));
}
int main(){
    int n,sack_weight;
    cin>>n>>sack_weight;
    vector<pair<int,int>> items;
    for(int i=0;i<n;i++){
        int w,v;
        cin>>w>>v;
        items.push_back({w,v});
    }
    sort(items.begin(),items.end(),sort_by_sec);
    int tree_size=pow(2,n+1)-1;
    vector<pair<pair<int,int>,int>> state_space(tree_size,{{0,0},0});
    priority_queue<pair<pair<int,int>,int>,vector<pair<pair<int,int>,int>>,greater<pair<pair<int,int>,int>>> pq;
    vector<vector<bool>> path(tree_size,vector<bool>(n,true));
    state_space[0]={{0,0},0};
    pq.push({{0,0},0});
    int global_upper=INT_MAX;
    vector<bool> result;
    while(!pq.empty()){
        int node=pq.top().second;
        int lower_bound=pq.top().first.first;
        int upper_bound=pq.top().first.second;
        int level=state_space[node].second;
        pq.pop();
        if(upper_bound<=global_upper){
            result=path[node];
        }
        if(lower_bound<=global_upper && 2*node+2<tree_size){
            //left node
            path[2*node+1]=path[node];
            int l=0,u=0;
            int weight=0;
            int i;
            for(i=0;i<n;i++){
                if(path[2*node+1][i] && weight+items[i].first<=sack_weight){
                    weight+=items[i].first;
                    l+=items[i].second,u+=items[i].second;
                }
                else{
                    break;
                }
            }
            if(i!=n-1){
                i++;
                l+=(sack_weight-weight)*(float(items[i].second)/float(items[i].first));
            }
            l=-l,u=-u;
            state_space[2*node+1]={{l,u},level+1};
            pq.push({{l,u},2*node+1});
            if(u<global_upper){
                global_upper=u;
            }
            //right node
            path[2*node+2]=path[node];
            path[2*node+2][level]=false;
            l=0,u=0,weight=0;
            for(i=0;i<n;i++){
                if(path[2*node+2][i] && weight+items[i].first<=sack_weight){
                    weight+=items[i].first;
                    l+=items[i].second,u+=items[i].second;
                }
                else if(path[2*node+2][i]==false){
                    continue;
                }
                else{
                    break;
                }
            }
            if(i!=n-1){
                i++;
                l+=(sack_weight-weight)*(float(items[i].second)/float(items[i].first));
            }
            l=-l,u=-u;
            state_space[2*node+2]={{l,u},level+1};
            pq.push({{l,u},2*node+2});
            if(u<global_upper){
                global_upper=u;
            }
        }
    }
    cout<<"Maximum Value: "<<-global_upper<<endl;
    for(auto element:result){
        cout<<element<<" ";
    }
    return 0;
}
