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
node* create_dll(vector<int> &arr){
    node*head = new node(arr[0]);
    node*prev=head;
    for(int i=1;i<arr.size();i++){
        node*temp= new node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}