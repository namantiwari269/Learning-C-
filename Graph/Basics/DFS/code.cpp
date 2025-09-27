#include<iostream>
using namespace std;

vector<int> dfs(vector<vector<int>>& adj) {
    vector<int> bfs;
    int n = adj.size();
    vector<int> vis(n,0);
    helper(adj,bfs,vis,0);
    return bfs;
}
void helper(vector<vector<int>>& adj,vector<int> &bfs,vector<int>& vis,int node){
    vis[node]=1;
    bfs.push_back(node);
    for(auto it : adj[node]){
        if(vis[it]==0){
            helper(adj,bfs,vis,it);
        }
    }
    return;
}