#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};

vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
    Node* temp1=head;
    vector<pair<int,int>> ans;
    while(temp1!=NULL){
        Node*temp2=temp1->next;
        while(temp2!=NULL && (temp1->data)+(temp2->data)<=target){
            if((temp1->data)+(temp2->data)==target){
                ans.push_back({temp1->data,temp2->data});
            }
            temp2=temp2->next;
        }
        temp1=temp1->next;
    }
    return ans;
}