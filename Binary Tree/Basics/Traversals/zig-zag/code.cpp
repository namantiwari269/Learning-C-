#include<iostream>
using namespace std;



 struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    vector<vector<int>> ans;
    if(root==NULL) return ans;
    queue<TreeNode*> q;
    q.push(root);
    bool flag=true;
    while(!q.empty()){
        int n = q.size();
        vector<int> row(n);
        for(int i=0;i<n;i++){
            TreeNode* temp = q.front();
            q.pop();
            int ind= (flag)?i:n-i-1;
            row[ind]= temp->val;
            if(temp->left!=NULL) q.push(temp->left);
            if(temp->right!=NULL) q.push(temp->right);
        }
        flag=!flag;
        ans.push_back(row);
    }
    return ans;     
}