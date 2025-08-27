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

ListNode* deleteMiddle(ListNode* head) {
    if(head==NULL) return head;
    if(head->next==NULL){
        ListNode*prev=head;
        head=head->next;
        prev->next=nullptr;
        return head;
    }
    ListNode*slow=head;
    ListNode*fast=head->next->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    ListNode* deln=slow->next;
    slow->next=slow->next->next;
    delete deln;
    return head;
}