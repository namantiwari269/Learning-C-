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
ListNode* oddEvenList(ListNode* head) {
    if(head==NULL || head->next==NULL) return head;
    ListNode*odd=head;
    ListNode*even=head->next;
    ListNode*even_head=even;
    while(even!=NULL && even->next!=NULL){
        odd->next=odd->next->next;
        even->next=even->next->next;
        odd=odd->next;
        even=even->next;
    }
    odd->next=even_head;
    return head;
}