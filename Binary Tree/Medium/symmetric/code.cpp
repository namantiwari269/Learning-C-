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

bool isSymmetric(TreeNode* root) {
    return helper(root,root);
}
bool helper(TreeNode* l,TreeNode* r){
    if(!l&&!r) return true;
    if(!l||!r) return false;
    if(l->val!=r->val) return false;
    return helper(l->left,r->right) && helper(r->left,l->right);
}