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
node* delete_tail(node* head,int val){
    if(head==NULL){
        return new node(val);
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    node* newnode =new node(val);
    temp->next = newnode;
    return head;

}