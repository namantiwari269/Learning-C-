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

bool isPalindrome(ListNode* head) {
    ListNode* fast=head;
    ListNode* slow=head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    ListNode* new_head= reverseList(slow->next);
    ListNode*first=head;
    ListNode*last=new_head;
    while(last!=NULL){
        if(first->val != last->val){
            new_head=reverseList(new_head);
            return false;
        }
        first=first->next;
        last=last->next;
    }
    return true;

    
}
ListNode* reverseList(ListNode* head) {
    ListNode* last=NULL;
    ListNode* temp=head;
    while(temp!=NULL){
        ListNode*front = temp->next;
        temp->next=last;
        last=temp;
        temp=front;
    }
    return last;
}