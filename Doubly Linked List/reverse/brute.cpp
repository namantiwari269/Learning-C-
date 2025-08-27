#include<iostream>
using namespace std;

class node{
    public:
    int data;
    public:
    node* next;
    public:
    node*back;
    public:
    node(int data1,node*next1,node*back1){
        data=data1;
        next=next1;
        back=back1;
    }
    public:
    node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};
node* reverse(node* head){
    stack<int> st;
    node* temp =head;
    while(temp!=NULL){
        st.push(temp->data);
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        temp->data= st.top();
        st.pop();
        temp=temp->next;
    }
    return head;
}