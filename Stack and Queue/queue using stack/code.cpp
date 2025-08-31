#include<iostream>
using namespace std;

class MyQueue {
public:
stack<int> s1;
public:
stack<int> s2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        int n = s1.size();
        for(int i=0;i<n;i++){
            int a = s1.top();
            s2.push(a);
            s1.pop();
        }
        s1.push(x);
        for(int i=0;i<n;i++){
            int a = s2.top();
            s1.push(a);
            s2.pop();
        }

    }
    
    int pop() {
        int a = s1.top();
        s1.pop();
        return a;
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        if(s1.size()==0)return true;
        return false;
    }
};
