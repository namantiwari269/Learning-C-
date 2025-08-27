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

    ListNode* sortList(ListNode* head) {
        return Merge_sort(head);
    }
    ListNode* Merge_sort(ListNode* head){
        if(head==NULL || head->next==NULL) return head;
        ListNode* mid = find_mid(head);
        ListNode*left_head= head;
        ListNode*right_head= mid->next;
        mid->next=nullptr;
        left_head=Merge_sort(left_head);
        right_head=Merge_sort(right_head);
        return merge(left_head,right_head);

    }
    ListNode* find_mid(ListNode*head){
        ListNode*slow=head;
        ListNode*fast=head->next;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* merge(ListNode*left,ListNode*right){
        ListNode* dummy= new ListNode(-1);
        ListNode* temp=dummy;
        ListNode* t1=left;
        ListNode* t2=right;
        while(t1!=NULL && t2!=NULL){
            if(t1->val<=t2->val){
                temp->next=t1;
                t1=t1->next;
                temp=temp->next;
            }
            else{
                temp->next=t2;
                t2=t2->next;
                temp=temp->next;
            }
        }
        if(t1!=NULL) temp->next=t1;
        if(t2!=NULL) temp->next=t2;
        return dummy->next;
    }