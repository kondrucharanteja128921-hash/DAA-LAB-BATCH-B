#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void dfs(int u,const vector<vector<int>>&g,vector<int>&vis){
    vis[u]=1; cout<<u<<" ";
    for(int v:g[u]) if(!vis[v]) dfs(v,g,vis);
}
void bfs(int s,const vector<vector<int>>&g){
    vector<int>vis(g.size(),0); queue<int>q;
    vis[s]=1;q.push(s);
    while(!q.empty()){
        int u=q.front();q.pop();cout<<u<<" ";
        for(int v:g[u]) if(!vis[v]){vis[v]=1;q.push(v);}
    }
}
int main(){
    int n,e; cout<<"DAA Practical 8 - Graph Traversal (DFS and BFS)\n";
    cout<<"Enter number of vertices: ";cin>>n;
    cout<<"Enter number of edges: ";cin>>e;
    vector<vector<int>>g(n);
    cout<<"Enter "<<e<<" undirected edges (u v), vertices 0 to "<<n-1<<":\n";
    for(int i=0;i<e;i++){int u,v;cin>>u>>v;g[u].push_back(v);g[v].push_back(u);}
    int s;cout<<"Enter starting vertex: ";cin>>s;
    vector<int>vis(n,0); cout<<"DFS: ";dfs(s,g,vis);cout<<"\n";
    cout<<"BFS: ";bfs(s,g);cout<<"\n";
    return 0;
}
