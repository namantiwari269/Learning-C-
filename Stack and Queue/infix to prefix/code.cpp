#include<iostream>
using namespace std;

string infixToPrefix(string s) {
    reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') s[i]=')';
        else if(s[i]==')') s[i]='(';
    }
    string ans="";
    stack<char> st;
    int i =0;
    while(i<s.length()){
        if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z'|| s[i]>='0'&&s[i]<='9'){
            ans+= s[i];
        }
        else{
            if(st.empty()) st.push(s[i]);
            else if(s[i]=='(') st.push(s[i]);
            else if(s[i]==')'){
                while(!st.empty() && st.top()!='('){
                    ans+=st.top();
                    st.pop();
                }
                st.pop();
                    
            }
            else{
                if(s[i]=='^'){
                    while(!st.empty()&& st.top()!='(' && priority_check(s[i])<=priority_check(st.top())){
                        ans+=st.top();
                        st.pop();
                    }
                }
                else{
                    while(!st.empty()&& st.top()!='(' && priority_check(s[i])<priority_check(st.top())){
                        ans+=st.top();
                        st.pop();
                    }
                }
                st.push(s[i]);
            }
        }
        i++;
    }
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int priority_check(char ch){
    if(ch=='^') return 3;
    else if(ch=='/'||ch=='*' )return 2;
    else if(ch=='+'||ch=='-') return 1;
    else return 0;
}