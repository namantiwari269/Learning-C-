#include<iostream>
using namespace std;

string longestPalindrome(string s) {
    int n = s.length();
    string longest="";
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            string sub = s.substr(i,j-i+1);
            string temp= reverseWord(sub);
            if(sub==temp && temp.length()>longest.length()){
                longest = temp;
            }
            }
        }
    return longest;
}
string reverseWord(string s) {
    if(s.length()==0 || s.length()==1) return s;
    int n = s.length();
    string ans = s;
    int i = 0;
    int j =n-1;
    while(j>i){
        char t= ans[i];
        ans[i]= ans[j];
        ans [j]=t;
        i++;
        j--;
    }
    return ans;
}