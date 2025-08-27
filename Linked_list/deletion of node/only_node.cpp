#include<iostream>
using namespace std;

class ListNode{
    public:
    int val;
    public:
    ListNode* next;

    public:
    ListNode(int data1,ListNode*next1){
        val=data1;
        next=next1;
    }
    public:
    ListNode(int data1){
        val=data1;
        next=nullptr;
    }

};

void deleteNode(ListNode* node) {
        ListNode* prev = NULL;
        while(node!= NULL && node->next!=NULL){
            node->val=node->next->val;
            prev= node;
            node=node->next;
        }
        prev->next=nullptr;
        delete node;
}