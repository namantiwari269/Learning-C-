#include<iostream>
using namespace std;

string reverseWords(string s) {
    string ans="";
    string temp="";
    int left=0;
    int n = s.length();
    while(left<=n-1){
        if(s[left]==' '){
            if(!temp.empty()){
                if(!ans.empty()) ans=temp+" "+ans;
                else ans = temp;
                temp="";
            }
        }
        else{
            temp+=s[left];
        }
        left++;
    }
    if(!temp.empty()){
        if(ans.empty()){
            ans=temp;
        }
        else{
            ans= temp+" "+ ans;
        }
    }
    return ans;
}