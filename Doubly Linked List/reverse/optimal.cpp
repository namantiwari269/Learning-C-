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
node* reverse(node* head){
    node* current=head;
    node* last=NULL;
    while(current!=NULL){
        last=current->back;
        current->next=current->back;
        current->next=last;
        current=current->back;
    }
    return head;
}