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

int diameterOfBinaryTree(TreeNode* root) {
    int diameter=0;
    maxDepth(root,diameter);
    return diameter;
}

int maxDepth(TreeNode* root,int &maxi) {
    if(root == NULL) return 0;
    int lh = maxDepth(root->left,maxi);    
    int rh = maxDepth(root->right,maxi);   
    maxi=max(maxi,lh+rh);
    return 1+max(lh,rh);
}