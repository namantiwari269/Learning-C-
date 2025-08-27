#include<iostream>
using namespace std;

int maxDepth(string s) {
    int cnt =0;
    int n = s.length();
    int max_len=0;
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            cnt++;
        }
        else if(s[i]==')'){
            max_len = max(max_len,cnt);
            cnt--;
        }
        else continue;
    }
    return max_len;
}