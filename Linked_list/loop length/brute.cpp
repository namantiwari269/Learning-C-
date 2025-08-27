#include<iostream>
#include<map>
using namespace std;

class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

int lengthOfLoop(Node *head) {
    if(head==NULL || head->next == NULL) return 0;
    int t=1;
    map<Node*,int> mpp;
    Node*temp=head;
    while(temp!=NULL){
        if(mpp.find(temp)!=mpp.end()){
            return t-mpp[temp];
        }
        mpp[temp]=t;
        temp=temp->next;
        t++;
    }
    return 0;
}