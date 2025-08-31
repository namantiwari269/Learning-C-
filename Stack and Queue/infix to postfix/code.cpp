#include<iostream>
using namespace std;


string infixToPostfix(string& s) {
    int i=0;
    stack<char> st;
    string ans="";
    while(i<s.length()){
        if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z'|| s[i]>='0'&&s[i]<='9'){
            ans+= s[i];
        }
        else{
            if(st.empty()) st.push(s[i]);
            else{
                if(s[i]=='(') st.push(s[i]);
                else if(s[i]==')'){
                    while(!st.empty()&&st.top()!='('){
                        char a = st.top();
                        ans+= a;
                        st.pop();
                    }
                    st.pop();
                }
                else{
                    while(!st.empty()&&st.top()!='(' &&priority_check(s[i])<=priority_check(st.top())){
                        char a = st.top();
                        st.pop();
                        ans+=a;
                    }
                    st.push(s[i]);
                }
            }
        }
        i++;
    }
    while(!st.empty()){
        char a = st.top();
        st.pop();
        ans+= a;
        
    }
    return ans;
    
}
int priority_check(char ch){
    if(ch=='^') return 3;
    else if(ch=='/'||ch=='*' )return 2;
    else if(ch=='+'||ch=='-') return 1;
    else return 0;
}
