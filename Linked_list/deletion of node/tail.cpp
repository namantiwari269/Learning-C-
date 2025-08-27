#include<iostream>
using namespace std;

class node{
    public:
    int data;
    public:
    node* next;

    public:
    node(int data1 , node* next1){
        data = data1;
        next = next1;
    }
    public:
    node(int data1){
        data = data1;
        next = nullptr;
    }

};
node* delete_tail(node* head){
    if(head==NULL || head->next==NULL) return head;
    node* temp = head;
    while(temp->next->next != NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=nullptr;
    return head;

}