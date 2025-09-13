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
int maxPathSum(TreeNode* root) {
    int sum=INT_MIN;
    maxDepth(root,sum);
    return sum;
}
int maxDepth(TreeNode* root,int &maxi) {
    if(root == NULL) return 0;
    int ls = max(0,maxDepth(root->left,maxi));    
    int rs = max(0,maxDepth(root->right,maxi));    
    maxi= max(maxi,root->val+ls+rs);
    return (root->val)+max(ls,rs);
}