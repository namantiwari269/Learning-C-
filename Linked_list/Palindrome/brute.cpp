#include<iostream>
using namespace std;

 class ListNode {
    public:
    int val;
    public:
    ListNode* next;
    public:
    ListNode(int val1, ListNode* next1){
        val=val1;
        next=next1;
    }
    public:
    ListNode(int val1){
        val=val1;
        next=nullptr;
    }
 };


bool isPalindrome(ListNode* head) {
    vector<int> arr;
    ListNode* temp = head;
    while(temp!=NULL){
        arr.push_back(temp->val);
        temp=temp->next;
    }
    int i=0;
    int j = arr.size()-1;
    while(i<j){
        if(arr[i]!=arr[j]) return false;
        i++;
        j--;
    }
    return true;
    
}