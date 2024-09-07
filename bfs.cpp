// BFS
#include<bits/stdc++.h>
using namespace std;
vector<int> bfs(int startvertex,int ver,vector<int> adj[]){
    vector<int> vis(ver+2,0);
    vis[startvertex] = 1;
    queue<int> q;
    q.push(startvertex);
    vector<int> sol;
    while(q.size()!=0){
        int node = q.front();
        q.pop();
        sol.push_back(node);
        for(auto it:adj[node]){
            if(vis[it]==0){
                vis[it] = 1;
                q.push(it);
            }

        }

    }
    return sol;
}
void edge(vector<int> adj [],int x,int y){
    adj[x].push_back(y);
    adj[y].push_back(x);
}

int main(){
    int v,e;
    cin>>v>>e;
    vector<int> adj[v+2];
    edge(adj,1,2);
    edge(adj,1,7);
    edge(adj,2,3);
    edge(adj,2,6);
    edge(adj,7,8);
    edge(adj,7,10);
    edge(adj,8,11);
    edge(adj,3,5);
    edge(adj,8,9);
    int startvertex;
    cout<<"enter start vertex";
    cin>>startvertex;
    vector<int> ans = bfs(startvertex,v,adj);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}



