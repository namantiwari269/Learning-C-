#include<iostream>
using namespace std;

string longestPalindrome(string s) {
    int n = s.length();
    if(n==0 || n==1) return s;
    string lps="";
    for(int i=1;i<n;i++){
        int low = i;
        int high = i;
        while(s[low]==s[high]){
            low--;
            high++;
            if(low==-1 || high == n){
                break;
            }
        }
        string palin= s.substr(low+1,high-low-1);
        if(palin.length()>lps.length()){
            lps=palin;
        }
        low = i-1;
        high = i;
        while(low>=0 && high <n && s[low]==s[high]){
            low--;
            high++;
            if(low==-1 || high == n){
                break;
            }
        }
        palin= s.substr(low+1,high-low-1);
        if(palin.length()>lps.length()){
            lps=palin;
        }
    }
    return lps;
}