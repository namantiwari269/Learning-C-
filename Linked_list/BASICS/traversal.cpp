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

node* convertarr2ll(vector<int> &arr){
    node*head = new node(arr[0]);
    node*mover = head;
    int n = arr.size();
    for(int i=1;i<n;i++){
        node*temp = new node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;

}
int main(){
    vector<int> arr= {1,2,3,4,5,6};
    node* head = convertarr2ll(arr);
    node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}