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

ListNode* collision_point(ListNode *headA, ListNode *headB,int d){
    ListNode*t1=headA;
    ListNode*t2=headB;
    for(int i=0;i<d;i++){
        t1=t1->next;
    }
    while(t1!=NULL && t2!=NULL){
        if(t1==t2) return t1;
        t1=t1->next;
        t2=t2->next;
    }
    return NULL;

}