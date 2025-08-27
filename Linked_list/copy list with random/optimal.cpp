#include<iostream>
#include<map>
using namespace std;


class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


Node* copyRandomList(Node* head) {
    Node*temp=head;
    //in between
    while(temp!=NULL){
        Node* new_node= new Node(temp->val);
        new_node->next= temp->next;
        temp->next=new_node;
        temp=temp->next->next;
    }
    temp=head;
    //random
    while(temp!=NULL){
        if(temp->random){
            temp->next->random=temp->random->next;
        }
        else{
            temp->next->random=nullptr;
        }
        temp=temp->next->next;
    }
    temp=head;
    Node*dummy = new Node(-1);
    Node* t = dummy;
    while(temp!=NULL){
        t->next=temp->next;
        temp->next= temp->next->next;
        t=t->next;

        temp=temp->next;
    }
    Node*new_head=dummy->next;
    delete dummy;

    return new_head;
 
}