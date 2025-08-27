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
    if(head==NULL) return NULL;
    int cnt=length_ll(head);
    int mid= cnt/2 +1;
    ListNode* temp=head;
    int c=0;
    while(temp!=NULL){
        c++;
        if(c==mid) return temp;
        temp=temp->next;
    }
    return head;
}
int length_ll(ListNode* head){
    ListNode*temp=head;
    int cnt =0;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}  