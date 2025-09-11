#include<iostream>
using namespace std;

int characterReplacement(string s, int k) {
    vector<int> hash(26,0);
    int r=0;
    int max_len=0;
    int l=0;int mmf=0;
    int n = s.length();
    while(r<n){
        hash[s[r]-'A']++;
        mmf=max(mmf,hash[s[r]-'A']);
        while((r-l+1)-mmf>k){
            hash[s[l]-'A']--;
            mmf=0;
            for(int i=0;i<26;i++) mmf= max(mmf,hash[i]);
            l++;
        }
        if((r-l+1)-mmf<=k){
            max_len=max(max_len,r-l+1);
            r++;
        }
    }
    return max_len;
    
}