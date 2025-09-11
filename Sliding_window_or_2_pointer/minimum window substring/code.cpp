#include<iostream>
using namespace std;

string minWindow(string s, string t) {
    vector<int> hash(255,0);
    int m = t.length();
    for(int i=0;i<m;i++){
        hash[t[i]]++;
    } 
    int r=0;
    int l=0;
    int min_len=INT_MAX;
    int si=-1;
    int cnt =0;
    int n = s.length();
    while(r<n){
        if(hash[s[r]]>0) cnt++;
        while(cnt==m){
            if(r-l+1<min_len){
                si=l;
                min_len=r-l+1;
            }
            if(hash[s[l]]+1>0) cnt--;
            hash[s[l]]++;
            l++;
        }
        hash[s[r]]--;
        r++;
    }
    return (si!=-1)?s.substr(si,min_len):"";
}