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

ListNode *detectCycle(ListNode *head) {
    if(head==NULL || head->next==NULL) return NULL;
    map<ListNode*,int> mpp;
    ListNode*temp=head;
    while(temp!=NULL){
        if(mpp.find(temp)!=mpp.end()) return temp;
        mpp[temp]=1;
        temp=temp->next;
    }
    return 0;

}