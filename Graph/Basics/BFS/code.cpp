#include<iostream>
using namespace std;

vector<int> bfs(vector<vector<int>> &adj) {
    int n = adj.size();
    vector<int> vis(n,0);
    vector<int> bfs;
    queue<int> q;
    q.push(0);
    vis[0]=1;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        bfs.push_back(node);
    for(auto it : adj[node]){
        if(vis[it]==0){
            vis[it]=1;
            q.push(it);
        }
    }
        
    }
    return bfs;
}