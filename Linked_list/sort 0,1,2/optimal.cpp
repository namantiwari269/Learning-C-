#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

Node* segregate(Node* head) {
    if(head==NULL || head->next==NULL) return head;
    Node*zero_head= new Node(-1);
    Node*one_head=new Node(-1);
    Node*two_head=new Node(-1);
    Node*zero=zero_head;
    Node*one=one_head;
    Node*two=two_head;
    Node*temp=head;
    while(temp!=NULL){
        if(temp->data==0){
            zero->next=temp;
            zero=zero->next;
        }
        else if(temp->data==1){
            one->next=temp;
            one=one->next;
        }
        else{
            two->next=temp;
            two=two->next;
        }
        temp=temp->next;
    }
    Node* new_head=zero_head->next;
    if(one_head->next==NULL){
        zero->next=two_head->next;
    }
    else{
        zero->next=one_head->next;
        one->next=two_head->next;
    }
    two->next=nullptr;
    delete zero_head;
    delete one_head;
    delete two_head;
    return new_head;
}