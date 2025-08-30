#include<iostream>
using namespace std;


class MyStack {
public:
queue<int> q;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        if(q.size()==0) q.push(x);
        else{
            int s = q.size();
            q.push(x);
            for(int i=0;i<=s-1;i++){
                q.push(q.front());
                q.pop();
            }
        }
    }
    
    int pop() {
        int temp = q.front();
        q.pop();
        return temp;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        if(q.size()==0){
            return true;
        }
        return false;
    }
};