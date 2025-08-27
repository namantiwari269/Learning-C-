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
int main(){
    vector<int> arr= {1,2,3,4,5,6};
    node a  = node(arr[0],nullptr);
    node*b=&a;
    cout<<b<<endl;
    node*c = new node(arr[0],nullptr);
    cout<<c<<endl;
    node d = node(arr[0],nullptr);
    cout<<d.next<<endl;
    node*y = new node(arr[0],nullptr);
    cout<<y->data;

}