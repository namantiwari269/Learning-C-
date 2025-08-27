#include<iostream>
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
    if(head==NULL ||head->next==NULL) return 0;
    Node*fast=head;
    Node*slow=head;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
            return final_length(fast,slow);
        }
    }
    return 0;
}
int final_length(Node *fast,Node *slow){
    int cnt=1;
    fast=fast->next;
    while(slow!=fast){
        fast=fast->next;
        cnt++;
    }
    return cnt;
}