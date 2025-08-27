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
node* val_ins(node* head,int k,int el){
    if(head==NULL){
        if(k==1){
            return new node(el);
        }
        else return NULL;
    }
    if(head->data==k){
        node*temp=new node(el,head);
        return temp;
    }
    node*temp=head;
    while(temp->next != NULL){
        if(temp->next->data==k){
            node* new_node=new node(el);
            new_node->next=temp->next;
            temp->next=new_node;
            break;
        }
        temp=temp->next;
    }
    return head;
}