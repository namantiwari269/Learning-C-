#include<iostream>
#include<map>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int n = s.length();
    if(n==0) return 0;
    int l =0;
    int r =0;
    int max_len=1;
    map<char,int> mpp;
    while(r<n){
        if(mpp.find(s[r])!=mpp.end() && mpp[s[r]]>=l){
            l= mpp[s[r]]+1;
            mpp[s[r]]=r;
        }
        mpp[s[r]]=r;
        max_len=max(max_len,r-l+1);
        r++;

    }  
    return max_len;
}