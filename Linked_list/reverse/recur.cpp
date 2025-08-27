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
    if(head==NULL) return NULL;
    return reverse_node(head,NULL);
}
ListNode* reverse_node(ListNode* temp,ListNode* last){
    if(temp==NULL) return last;
    ListNode*front = temp->next;
    temp->next=last;
    
    return reverse_node(front,temp);
}