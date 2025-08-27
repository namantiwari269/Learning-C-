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

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode* t1= headA;
    ListNode*t2=headB;
    while(t1!=NULL && t2!=NULL){
        if(t1==t2) return t1;
        if(t1->next==NULL){
            t1=headB;
            t2=t2->next;
        }
        else if(t2->next==NULL){
            t2=headA;
            t1=t1->next;
        }
        else{
            t1=t1->next;
            t2=t2->next;

        }
    }
    return NULL;
}