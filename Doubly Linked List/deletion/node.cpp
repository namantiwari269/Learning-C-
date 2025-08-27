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

void del_node(node* temp){
    node*prev=temp->back;
    node*front=temp->next;
    if(front==NULL){
        prev->next=nullptr;
        temp->back=nullptr;
        delete temp;
        return;
    }
    prev->next=front;
    front->back=prev;
    temp->back=nullptr;
    temp->next=nullptr;
    delete temp;
    return;
}