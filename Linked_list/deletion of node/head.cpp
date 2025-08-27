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
node* delete_head(node* head){
    if(head==NULL) return head;
    node* temp = head;
    head = head->next;
    free(temp);
    //delete temp;
    return head;
}