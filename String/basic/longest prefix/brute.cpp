#include<iostream>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if(strs.size()==0) return "";
    if(strs.size()==1) return strs[0];
    string pre="";
    int n =1;
    for(int i=0;i<strs[0].size();i++){
        string temp="";
        temp=strs[0].substr(0,n);
        for(int j=1;j<strs.size();j++){
            if(temp!=strs[j].substr(0,n)){
                return pre;
            }

        }
        pre=temp;
        n++;
    }
    return pre;
}