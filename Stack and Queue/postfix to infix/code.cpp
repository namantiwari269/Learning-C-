#include<iostream>
using namespace std;


string postToInfix(string s) {
    stack<string> st;
    int i=0;
    while(i<s.length()){
        if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z'|| s[i]>='0'&&s[i]<='9'){
            st.push(string(1,s[i]));
        }
        else{
            string a = st.top();
            st.pop();
            string b = st.top();
            st.pop();
            st.push("("+b+s[i]+a+")");
        }
        i++;
    }
    return st.top();
    
}