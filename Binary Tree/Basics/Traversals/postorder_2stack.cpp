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
vector<int> postorderTraversal(TreeNode* root) {
    vector<int> ans;
    if(root==NULL) return ans;
    stack<TreeNode*> st1;
    stack<TreeNode*> st2;
    st1.push(root);
    while(!st1.empty()){
        TreeNode* node= st1.top();
        st1.pop();
        if(node->left!=NULL) st1.push(node->left);
        if(node->right!=NULL) st1.push(node->right);
        st2.push(node);
    }
    while(!st2.empty()){
        ans.push_back(st2.top()->val);
        st2.pop();
    }
    return ans;

}