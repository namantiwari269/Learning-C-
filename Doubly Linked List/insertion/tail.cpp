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
node* ins_head(node* head,int el){
    node* temp = new node(el, head,nullptr);
    head->back=temp;
    return temp;
}
node* ins_tail(node*head,int el){
    if(head==NULL){
        node* head= new node(el);
    }
    if(head->next==NULL) return ins_head(head,el);
    node*tail = head;
    while(tail!=NULL){
        tail=tail->next;
    }
    node* prev =tail->back;
    node* new_n = new node(el,tail,prev);
    tail->back=new_n;
    prev->next=new_n;
    return head; 
}