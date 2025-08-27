#include<iostream>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    sort(strs.begin(),strs.end());
    int n = strs.size();
    int cnt=0;
    for(int i=0;i< min(strs[0].size(),strs[n-1].size());i++){
        if(strs[0][i]==strs[n-1][i]) cnt++;
        else break;
    }
    return strs[0].substr(0,cnt);
}