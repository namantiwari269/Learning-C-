
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
    int amountOfTime(TreeNode* root, int start) {
        unordered_map<TreeNode*, TreeNode*> parents;
        TreeNode* st = parent(parents, root, start);
        queue<TreeNode*> q;
        unordered_map<TreeNode*, int> vis;
        int count=0;
        q.push(st);
        vis[st] = 1;
        while (!q.empty()) {
            int sz = q.size();
            for (int i = 0; i < sz; i++) {
                TreeNode* curr = q.front();
                q.pop();
                if (parents[curr] && vis.find(parents[curr]) == vis.end()) {
                    q.push(parents[curr]);
                    vis[parents[curr]]++;
                }
                if (curr->left && vis.find(curr->left) == vis.end()) {
                    q.push(curr->left);
                    vis[curr->left]++;
                }
                if (curr->right && vis.find(curr->right) == vis.end()) {
                    q.push(curr->right);
                    vis[curr->right]++;
                }
            }
            count++;
        }
        return count-1;
    }
    TreeNode* parent(unordered_map<TreeNode*, TreeNode*>& parents,
                     TreeNode* root, int start) {
        queue<TreeNode*> q;
        TreeNode* st = NULL;
        q.push(root);
        parents[root] = NULL;
        while (!q.empty()) {
            TreeNode* curr = q.front();
            if (curr->val == start)
                st = curr;
            q.pop();
            if (curr->left) {
                parents[curr->left] = curr;
                q.push(curr->left);
            }
            if (curr->right) {
                parents[curr->right] = curr;
                q.push(curr->right);
            }
        }
        return st;
    }
};