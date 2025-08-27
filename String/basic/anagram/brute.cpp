#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;


bool isAnagram(string s, string t) {
    if(s.length()!=t.length()) return false;
    map<char,int>mpp1;   
    map<char,int>mpp2;
    for(int i =0 ; i<s.length();i++){
        mpp1[s[i]]++;
        mpp2[t[i]]++;
    }   
    for(int i =0 ; i<s.length();i++){
        if(mpp1[s[i]]!=mpp2[s[i]]) return false;
    }   
    return true;
}
