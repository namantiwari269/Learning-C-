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