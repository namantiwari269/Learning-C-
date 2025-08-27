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

ListNode *detectCycle(ListNode *head) {
    if(head==NULL || head->next == NULL) return NULL;
    ListNode* fast=head;
    ListNode* slow=head;
    while(fast!=NULL && fast->next != NULL){
        fast=fast->next->next;
        slow= slow->next;
        if(fast==slow) {
            slow= head;
            return start_point(fast,slow);
        }
    }
    return NULL;
}
ListNode* start_point(ListNode* fast,ListNode* slow){
    while(slow!=fast){
        fast=fast->next;
        slow=slow->next;
    }
    return fast;
}