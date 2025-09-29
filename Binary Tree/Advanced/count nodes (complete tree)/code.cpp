
#include<iostream>
using namespace std;



 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };


class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root ==NULL) return 0;
        int n = helperl(root);   
        int m = helperr(root);
        if(n==m) return (1<<n) -1;
        else return 1 + countNodes(root->left) + countNodes(root->right);
    }
    int helperl(TreeNode* root){
        int cnt=0;
        while(root){
            cnt++;
            root=root->left;
        }
        return cnt;
    }
    int helperr(TreeNode* root){
        int cnt=0;
        while(root){
            cnt++;
            root=root->right;
        }
        return cnt;
    }
};