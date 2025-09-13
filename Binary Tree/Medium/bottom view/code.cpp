#include<iostream>
#include<map>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

vector<int> BottomView(Node *root) {
    vector<int>ans;
    if(root==NULL) return ans;
    map<int,int> mpp;
    queue<pair<Node*,int>> q;
    q.push({root,0});
    while(!q.empty()){
        auto p = q.front();
        q.pop();
        Node* temp= p.first;
        int v= p.second;
        mpp[v]=temp->data;
        if(temp->left) q.push({temp->left,v-1});
        if(temp->right) q.push({temp->right,v+1});
    }
    for(auto p:mpp){
        ans.push_back(p.second);
    }
    return ans;
}