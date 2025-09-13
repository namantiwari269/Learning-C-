#include<iostream>
using namespace std;

class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

vector<int> boundaryTraversal(Node *root) {
    vector<int> res;
    if(root==NULL) return res;
    if(!isLeaf(root)) res.push_back(root->data);
    addLeftBoundary(root,res);
    addLeaf(root,res);
    addRightBoundary(root,res);
    return res;
}
void addLeftBoundary(Node *root,vector<int> &res){
    Node*curr = root->left;
    while(curr){
        if(!isLeaf(curr)) res.push_back(curr->data);
        if(curr->left) curr=curr->left;
        else curr=curr->right;
    }
}
void addRightBoundary(Node *root,vector<int> &res){
    Node*curr = root->right;
    vector<int> temp;
    while(curr){
        if(!isLeaf(curr)) temp.push_back(curr->data);
        if(curr->right) curr=curr->right;
        else curr=curr->left;
    }
    for(int i=temp.size()-1;i>=0;i--){
        res.push_back(temp[i]);
    }
}
void addLeaf(Node *root,vector<int> &res){
    if(isLeaf(root)){
        res.push_back(root->data);
        return;
    }
    if(root->left) addLeaf(root->left,res);
    if(root->right) addLeaf(root->right,res);
}
bool isLeaf(Node *root){
    return root->left==NULL && root->right==NULL;
}