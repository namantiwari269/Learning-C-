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
node* position_ins(node* head,int k,int el){
    if(head==NULL){
        if(k==1){
            return new node(el);
        }
        else return NULL;
    }
    if(k==1){
        node*temp=new node(el,head);
        return temp;
    }
    int cnt=0;
    node*temp=head;
    while(temp!=NULL){
        cnt++;
        if(cnt==k-1){
            node* new_node=new node(el);
            new_node->next=temp->next;
            temp->next=new_node;
            break;
        }
        temp=temp->next;
    }
    return head;
}