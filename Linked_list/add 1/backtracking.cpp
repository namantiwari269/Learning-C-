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
    int carry=helper(head);
    if(carry==1){
        Node* new_node=new Node(1);
        new_node->next=head;
        return new_node;
    }
    return head;
}
int helper(Node*temp){
    if(temp==NULL) return 1;
    int carry=helper(temp->next);
    temp->data=temp->data+carry;
    if(temp->data<10) return 0;
    else{
        temp->data=0;
        return 1;
    }
}