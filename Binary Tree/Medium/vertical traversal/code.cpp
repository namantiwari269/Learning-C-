#include<iostream>
#include<map>
#include<set>

using namespace std;



 struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
vector<vector<int>> verticalTraversal(TreeNode* root) {
    vector<vector<int>> ans;
    if(root==NULL) return ans;
    map<int,map<int,multiset<int>>> nodes;
    queue<pair<TreeNode*,pair<int , int>>> q;
    q.push({root,{0,0}});
    while(!q.empty()){
        auto p = q.front();
        q.pop();
        TreeNode* temp = p.first;
        int v= p.second.first;
        int l= p.second.second;
        nodes[v][l].insert(temp->val);
        if(temp->left) q.push({temp->left,{v-1,l+1}});
        if(temp->right) q.push({temp->right,{v+1,l+1}});
    }
    for(auto p : nodes){
        vector<int> col;
        for(auto q : p.second){
            col.insert(col.end(),q.second.begin(),q.second.end());
        }
        ans.push_back(col);
    }
    return ans;
}