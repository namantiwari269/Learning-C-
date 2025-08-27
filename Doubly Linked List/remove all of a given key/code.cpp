#include<iostream>
using namespace std;

struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
};

void deleteAllOccurOfX(struct Node** head, int x) {
    Node*temp= *head;
    while(temp!=NULL){
        if(temp->data==x){
            if(temp==*head){
                *head=(*head)->next;
            }
            Node*next_node=temp->next;
            Node*prev_node=temp->prev;
            if(next_node) next_node->prev=prev_node;
            if(prev_node) prev_node->next=next_node;
            delete temp;
            temp=next_node;
        }
        else temp=temp->next;
    }
}