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
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*, TreeNode*> parent;
        unordered_map<TreeNode*, int> vis;
        int dep = 0;
        parent[root] = NULL;
        markparent(root, parent);
        queue<TreeNode*> q;
        vis[target] = 1;
        q.push(target);
        while (!q.empty()) {
            int sz = q.size();
            if(dep==k) break;
            for (int i = 0; i < sz; i++) {
                TreeNode* curr = q.front();
                q.pop();
                if (parent[curr] && vis.find(parent[curr]) == vis.end()) {
                    q.push(parent[curr]);
                    vis[parent[curr]]++;
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
            dep++;
        }
        vector<int> result;
        while (!q.empty()) {
            result.push_back(q.front()->val);
            q.pop();
        }
        return result;
    }

private:
    void markparent(TreeNode* root,
                    unordered_map<TreeNode*, TreeNode*>& parent) {
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* curr = q.front();
            q.pop();
            if (curr->left) {
                parent[curr->left] = curr;
                q.push(curr->left);
            }
            if (curr->right) {
                parent[curr->right] = curr;
                q.push(curr->right);
            }
        }
    }
};