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
node* position_del(node* head,int k){
    if(head==NULL) return head;
    if(k==1){
        node*temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    int cnt=0;
    node*temp=head;
    node* prev = NULL;
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}