#include<iostream>
#include<map>
using namespace std;

class node {
public:
    node* next;

public:
    node* prev;

public:
    int keya;

public:
    int data;

public:
    node(int key1, int data1, node* next1, node* prev1) {
        keya = key1;
        data = data1;
        next = next1;
        prev = prev1;
    }

public:
    node(int key1, int data1) {
        keya = key1;
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

class LRUCache {
public:
    node* head = new node(-1, -1);

public:
    node* tail = new node(-1, -1);

public:
    map<int, node*> mpp;

public:
    int cap;

public:
    LRUCache(int capacity) {
        cap = capacity;
        tail->prev = head;
        head->next = tail;
    }

    int get(int key) {
        if (mpp.find(key) == mpp.end())
            return -1;
        node* temp = mpp[key];
        int value = temp->data;
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        temp->prev = head;
        temp->next = head->next;
        temp->next->prev = temp;
        head->next = temp;
        mpp[key] = temp;
        return value;
    }

    void put(int key, int value) {
        if (mpp.find(key) != mpp.end()) {
            node* temp = mpp[key];
            temp->data = value;
            int value = temp->data;
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            temp->prev = head;
            temp->next = head->next;
            temp->next->prev = temp;
            head->next = temp;
            mpp[key] = temp;
        } 
        else if (cap > 0) {
            node* temp = new node(key, value);
            temp->next = head->next;
            temp->prev = head;
            temp->next->prev = temp;
            head->next = temp;
            mpp[key] = temp;
            cap--;
        } 
        else {
            node* deletion = tail->prev;
            deletion->prev->next = tail;
            tail->prev = deletion->prev;
            mpp.erase(deletion->keya);
            delete deletion;
            node* temp = new node(key, value);
            temp->prev = head;
            temp->next = head->next;
            temp->next->prev=temp;
            head->next=temp;
            mpp[key]=temp;
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */