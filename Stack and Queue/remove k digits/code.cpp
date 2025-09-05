#include<iostream>
using namespace std;


string removeKdigits(string num, int k) {
    string st;
    int i=0;
    int n = num.length();
    if(n==k) return "0";
    while(i<n){
        if(st.empty()){
            st.push_back(num[i]);
        }
        else{
            while(k!=0 && !st.empty() && st.back()>num[i]){
                st.pop_back();
                k--;
            }
            st.push_back(num[i]);         
        }
        i++;
    }
    while(k!=0){
        st.pop_back();
        k--;
    }
    int idx = 0;
    while (idx < st.size() && st[idx] == '0') {
        idx++;
    }
    st = st.substr(idx);

    if (st.empty()) st = "0";
    return st;
}
