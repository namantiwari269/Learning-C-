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

 node* del_kth(node* head,int k){
    if(head==NULL){
        return NULL;
    }
    node * temp = head;
    int cnt =0;
    while(temp!=NULL){
        cnt ++;
        if(cnt==k) break;
        temp = temp->next;
    }
    node*prev=temp->back;
    node*front=temp->next;
    if(prev==NULL && front==NULL){
        delete temp;
        return NULL;
    }
    else if(prev==NULL){
        return del_head(head);

    }
    else if(front==NULL){
        prev->next=nullptr;
        temp->back=nullptr;
        delete temp;
        return head;
    }
    else{
        prev->next=front;
        front->back=prev;
        temp->back=nullptr;
        temp->next=nullptr;
        delete temp;
        return head;
    }
    
 }