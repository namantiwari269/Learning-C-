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
node* ins_node(node* n,int el){
    node* prev = n->back;
    node* new_nod= new node(el,n,prev);
    prev->next=new_nod;
    n->back=new_nod;
    return n;
}