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

ListNode* oddEvenList(ListNode* head) {
    if(head==NULL ||head->next==NULL) return head;
    vector<int> arr;
    ListNode* temp=head;
    while(temp!=NULL && temp->next!=NULL){
        arr.push_back(temp->val);
        temp=temp->next->next;

    }
    if(temp) arr.push_back(temp->val);
    temp=head->next;
    while(temp!=NULL && temp->next!=NULL){
        arr.push_back(temp->val);
        temp=temp->next->next;

    }
    if(temp) arr.push_back(temp->val);
    int i=0;
    temp=head;
    while(temp!=NULL){
        temp->val=arr[i];
        temp=temp->next;
        i++;

    }
    return head;

}