#include<iostream>
using namespace std;

class node{
    public:
    int data;
    public:
    node* next;
    public:
    node*back;
    public:
    node(int data1,node*next1,node*back1){
        data=data1;
        next=next1;
        back=back1;
    }
    public:
    node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};

node* del_head(node* head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    node*prev=head;
    head=head->next;
    head->back=nullptr;
    prev->next=nullptr;
    delete prev;
    return head;
}