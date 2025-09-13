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
vector<int> rightSideView(TreeNode* root) {
    vector<int> ds;
    helper(root,0,ds);
    return ds;
}
void helper(TreeNode* root,int level, vector<int>&ds){
    if(root==NULL) return;
    if(level==ds.size()) ds.push_back(root->val);
    if(root->right)helper(root->right,level+1,ds);
    if(root->left)helper(root->left,level+1,ds);

}