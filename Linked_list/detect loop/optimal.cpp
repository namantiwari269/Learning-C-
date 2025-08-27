#include<iostream>
#include<map>
using namespace std;

 class ListNode {
    public:
    int val;
    public:
    ListNode* next;
    public:
    ListNode(int val1, ListNode* next1){
        val=val1;
        next=next1;
    }
    public:
    ListNode(int val1){
        val=val1;
        next=nullptr;
    }
 };

bool hasCycle(ListNode *head) {
    ListNode* fast= head;
    ListNode* slow =head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast) return true;
    }
    return false;
}