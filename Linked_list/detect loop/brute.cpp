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

bool hasCycle(ListNode *head) {
    map<ListNode*,int> mpp;
    ListNode* temp = head;
    while(temp!=NULL){
        if(mpp.find(temp)!=mpp.end()) return true;
        mpp[temp]=1;
        temp=temp->next;
    }
    return false;
}