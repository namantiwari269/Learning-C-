

#include<iostream>
#include<map>
using namespace std;



 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };


class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> inmap;
        for (int i = 0; i < inorder.size(); i++) {
            inmap[inorder[i]] = i;
        }
        TreeNode* root = buildy(preorder, 0, preorder.size() - 1, inorder, 0,
                                inorder.size() - 1, inmap);
        return root;
    }
    TreeNode* buildy(vector<int>& preorder, int prestart, int preend,
                     vector<int>& inorder, int instart, int inend,
                     unordered_map<int, int>& inmap) {
        if (prestart > preend || instart > inend)
            return NULL;
        TreeNode* root = new TreeNode(preorder[prestart]);
        int inroot = inmap[root->val];
        int numleft = inroot - instart;
        root->left = buildy(preorder, prestart + 1, prestart + numleft, inorder,
                            instart, inroot - 1, inmap);
        root->right = buildy(preorder, prestart + numleft + 1, preend, inorder,
                             inroot + 1, inend, inmap);
        return root;
    }
};