#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node * next;
    struct Node * bottom;

    Node(int x){
        data = x;
        next = NULL;
        bottom = NULL;
    }

};

Node *flatten(Node *root) {
    return fun(root);
}
Node* fun(Node* head){
    if(head==NULL ||head->next==NULL) return head;
    Node*merged_head= fun(head->next);
    return merge(head,merged_head);
}
Node *merge(Node *head1,Node *head2){
    Node*dummy= new Node(-1);
    Node* temp=dummy;
    head1->next=nullptr;
    while(head1!=NULL && head2!=NULL){
        if(head1->data<head2->data){
            temp->bottom=head1;
            temp=head1;
            head1=head1->bottom;
        }
        else{
            temp->bottom=head2;
            temp=head2;
            head2=head2->bottom;
        }
    }
    if(head1) temp->bottom=head1;
    if(head2) temp->bottom = head2;
    Node* new_head = dummy->bottom;
    delete dummy;
    return new_head;
}
