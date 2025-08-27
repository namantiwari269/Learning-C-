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


Node* addOne(Node* head) {
    head=reverseList(head);
    Node*temp=head;
    Node* prev = NULL;  
    int carry=1;
    while(temp!=NULL){
        int sum=carry+temp->data;
        temp->data=sum%10;
        carry=sum/10;
        prev=temp;
        temp=temp->next;
    }
    if(carry>0){
        Node* ne= new Node(carry);
        prev->next=ne;
    }
    head=reverseList(head);
    return head;
}
Node* reverseList(Node* head) {
    Node* last=NULL;
    Node* temp=head;
    while(temp!=NULL){
        Node*front = temp->next;
        temp->next=last;
        last=temp;
        temp=front;
    }
    return last;
}