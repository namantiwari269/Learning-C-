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

 ListNode* reverseKGroup(ListNode* head, int k) {
    ListNode* temp = head;

    ListNode* next_node=nullptr;
    ListNode* prev_node=nullptr;
    while(temp!=NULL){
        ListNode* k_node = find_node(temp,k);
        if(k_node==NULL){
            if(prev_node) prev_node->next=temp;
            break;
        }
        next_node=k_node->next;
        k_node->next=nullptr;
        ListNode* revHead = reverseList(temp);
        if(temp==head){
            head=k_node;
        }
        else{
            prev_node->next=k_node;
        }
        prev_node=temp;
        temp=next_node;

    }
    return head;

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
ListNode* find_node(ListNode* head,int k){
    int cnt =0;
    ListNode* temp = head;
    while(temp){
        cnt++;
        if(cnt==k) return temp;
        temp=temp->next;
    }
    return NULL;
}