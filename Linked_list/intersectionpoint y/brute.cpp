#include<iostream>
#include<map>
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
    map<ListNode*,int> mpp;
    ListNode*temp1=headA;
    while(temp1!=NULL){
        mpp[temp1]=1;
    }
    ListNode*temp2=headB;
    while(temp2!=NULL){
        if(mpp.find(temp2)!=mpp.end()){
            return temp2;
        }
    }
    return NULL;
    
}