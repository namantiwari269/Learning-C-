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
node* position_del(node* head,int el){
    if(head==NULL) return head;
    if(head->data==el){
        node*temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    node*temp=head;
    node* prev = NULL;
    while(temp!=NULL){
        if(temp->data==el){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp->next;
    }
    return head;
}