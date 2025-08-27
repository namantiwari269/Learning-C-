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

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* dummy= new ListNode(-1);
    ListNode* t1=l1;
    ListNode* t2=l2;
    ListNode* curr=dummy;
    int carry=0;
    while(t1!=NULL || t2!=NULL){
        int sum=carry;
        if(t1) sum+= t1->val;
        if(t2) sum+= t2->val;
        ListNode* node= new ListNode(sum%10);
        carry=sum/10;
        curr->next=node;
        curr=node;
        if(t1) t1=t1->next;
        if(t2) t2=t2->next;
    }
    if(carry!=0){
    ListNode* node= new ListNode(carry);
    curr->next=node;
    }
    return dummy->next;

}