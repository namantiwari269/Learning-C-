#include<iostream>
#include<map>
using namespace std;


int longestKSubstr(string &s, int k) {
    map<char,int> mpp;
    int l =0;
    int r =0;
    int n = s.length();
    int max_len=-1;
    while(r<n){
        mpp[s[r]]++;
        if(mpp.size()>k){
            mpp[s[l]]--;
            if(mpp[s[l]]==0) mpp.erase(s[l]);
            l++;
        }
        if(mpp.size()==k){
                    int len = r-l+1;
        max_len=max(max_len,len);
        }
        r++;
    }
    return max_len;
}