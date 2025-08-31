#include<iostream>
using namespace std;

class MinStack {
public:
stack<long long> st;
public:
long long mini=INT_MAX;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            st.push(val);
            mini=val;
        }
        else{
            if(mini>val){
                long long a = 2*(long long)val;
                a-= mini;
                st.push(a);
                mini=val;
            }
            else{
                st.push(val);
            }
        }
    }
    
    void pop() {
        if(mini>st.top()){
            mini = 2*mini - st.top();
            st.pop();
        }
        else{
            st.pop();
        }
    }
    
    int top() {
        if(st.top()<mini) return mini;
        return st.top();
    }
    
    int getMin() {
        return mini;
    }
};
