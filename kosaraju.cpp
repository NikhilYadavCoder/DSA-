#include<bits/stdc++.h>
using namespace std;

void addedge(vector<int> adj[],char x,char y){
    adj[x].push_back(y);
}
int main(){
    int v,e;
    cin>>v>>e;
    vector<int> adj[v+1];
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
    
}