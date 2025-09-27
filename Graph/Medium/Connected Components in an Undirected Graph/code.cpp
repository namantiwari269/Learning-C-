#include<iostream>
using namespace std;


class Solution {
  public:
vector<vector<int>> getComponents(int n, vector<vector<int>>& edges) {
    vector<vector<int>> adj(n);
    for(auto it: edges){
        int u = it[0];
        int v = it[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> vis(n,0);
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        if(vis[i]==0){
            vector<int>dfs;
            helper(adj,vis,i,dfs);
            ans.push_back(dfs);
        }
        
    } 
    return ans;  
}
void helper(vector<vector<int>>& adj,vector<int>& vis,int node,vector<int>& dfs){
    vis[node]=1;
    dfs.push_back(node);
    for(auto it : adj[node]){
        if(vis[it]==0){
            helper(adj,vis,it,dfs);
        }
    }
    return;
}
};
