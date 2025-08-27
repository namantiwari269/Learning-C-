#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};

Node *removeDuplicates(struct Node *head) {
    Node* temp=head;
    while(temp!=NULL && temp->next!=NULL){
        Node*next_node=temp->next;
        while(next_node!=NULL && next_node->data==temp->data){
            Node*duplicate=next_node;
            next_node= next_node->next;
            delete duplicate;
        }
        temp->next=next_node;
        if(next_node)next_node->prev=temp;
        temp=temp->next;
    }
    return head;
    
}