

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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int, int> inmap;
        for (int i = 0; i < inorder.size(); i++) {
            inmap[inorder[i]] = i;
        }
        TreeNode* root = buildy(postorder, 0, postorder.size() - 1, inorder, 0,
                                inorder.size() - 1, inmap);
        return root;
    }
    TreeNode* buildy(vector<int>& postorder,int poststart,int postend, vector<int>& inorder,int instart,int inend,unordered_map<int,int> &inmap){
        if(poststart>postend || instart>inend) return NULL;
        TreeNode* root= new TreeNode(postorder[postend]);
        int inroot= inmap[root->val];
        int numleft = inroot-instart;
        root->left=buildy(postorder,poststart,poststart+numleft-1,inorder,instart,inroot-1,inmap);
        root->right=buildy(postorder,poststart+numleft,postend-1,inorder,inroot+1,inend,inmap);
        return root;
    }
};