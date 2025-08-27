#include<iostream>
using namespace std;



string removeOuterParentheses(string s) {
        string result = "";
        int sSize = s.size();
        int balance = 0;
        int start = 0;
        for(int i=0;i<sSize;i++){
            if(s[i]=='(') balance++;
            else balance--;
            if(balance==0){
                result += s.substr(start+1,i-start-1);
                start = i+1;
            }
        }

        return result;
}