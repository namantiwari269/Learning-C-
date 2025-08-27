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

ListNode* removeNthFromEnd(ListNode* head, int n) {
    if(head==NULL) return NULL;
    ListNode*fast=head;
    for(int i=0;i<n;i++){
        fast=fast->next;
    }
    if(fast==NULL){
            ListNode* deln = head;
            head = head->next;
            delete deln;
            return head;
    }
    ListNode*slow = head;
    while(fast->next != NULL){
        slow=slow->next;
        fast=fast->next;
    }
    ListNode* deln= slow->next;
    slow->next=slow->next->next;
    delete deln;
    return head;
}
