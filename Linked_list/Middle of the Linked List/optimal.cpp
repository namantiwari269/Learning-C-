#include<iostream>
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

ListNode* middleNode(ListNode* head) {
    if(head==NULL ||head->next==NULL) return head;
    ListNode*slow=head;
    ListNode*fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}