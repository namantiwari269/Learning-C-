#include<iostream>
using namespace std;

string preToInfix(string s) {
    int n = s.length();
    int i = n-1;
    stack<string> st;
    while(i>=0){
        if(st.empty()) st.push(string(1,s[i]));
        else if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z'|| s[i]>='0'&&s[i]<='9'){
            st.push(string(1,s[i]));
        }
        else{
            string a = st.top();
            st.pop();
            string b = st.top();
            st.pop();
            st.push("("+a+s[i]+b+")");
        }
        i--;
    }
    return st.top();
}