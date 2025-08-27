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



ListNode* rotateRight(ListNode* head, int k) {
    if(head==NULL) return NULL;
    ListNode* tail = head;
    int len =1;
    while(tail->next){
        len++;
        tail=tail->next;
    }    
    if(k%len==0) return head;
    if(k>len) k=k%len;
    tail->next=head;
    ListNode*temp=find_node(head,len-k);
    head=temp->next;
    temp->next=nullptr;
    return head;
    
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