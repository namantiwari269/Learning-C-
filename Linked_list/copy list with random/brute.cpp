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
    map<Node*,Node*> mpp;
    Node* temp=head;
    while(temp!=NULL){
        Node* new_node= new Node(temp->val);
        mpp[temp]=new_node;
        temp = temp->next;
    }
    temp=head;
    while(temp!=NULL){
        Node* clone_node=mpp[temp];
        clone_node->next= mpp[temp->next];
        clone_node->random=mpp[temp->random];
        temp=temp->next;
    }
    return mpp[head];
}
