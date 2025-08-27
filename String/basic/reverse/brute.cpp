#include<iostream>
using namespace std;

string reverseWords(string s) {
    stack<string> st;
    s+=' ';
    int n = s.length();
    string str="";
    for(int i=0;i<n;i++){
        if(s[i]==' '){
            if(!str.empty()){
                st.push(str);
                str="";
            }
        }
        else{
            str+=s[i];
        }
    }
    string ans="";
    while(st.size()!=0){
        ans+= st.top();
        if(st.size()!=1)ans+=" ";
        st.pop();
    }
    return ans;
}