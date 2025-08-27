#include<iostream>
#include<map>
using namespace std;

bool isAnagram(string s, string t) {
    if(s.length()!=t.length())return false;
    unordered_map<char,int>mpp;   
    for(int i =0 ; i<s.length();i++){
        mpp[s[i]]++;
        mpp[t[i]]--;
    }   
    for(int i =0 ; i<s.length();i++){
        if(mpp[s[i]]!=0) return false;
    }   
    return true;
}