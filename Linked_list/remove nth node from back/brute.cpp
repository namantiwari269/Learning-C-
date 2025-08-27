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
    int cnt= len(head);
    int k = cnt+1-n;
    return position_del(head,k);
}
int len(ListNode* head){
    int cnt=0;
    ListNode* temp=head;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}
ListNode* position_del(ListNode* head,int k){
    if(head==NULL) return head;
    if(k==1){
        ListNode*temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    int cnt=0;
    ListNode*temp=head;
    ListNode* prev = NULL;
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}