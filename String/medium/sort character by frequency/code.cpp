#include<iostream>
#include<map>
using namespace std;

string frequencySort(string s) {
    map<char,int> mpp;
    for(int i=0;i<s.length();i++){
        mpp[s[i]]++;
    }   
    vector<pair<int,char>> ans;
    for(auto it = mpp.begin();it!=mpp.end();it++){
        ans.push_back({it->second,it->first});
    }
    sort(ans.begin(),ans.end());
    string ans_st="";
    for(auto it = ans.begin();it<ans.end();it++){
        ans_st= string(it->first,it->second) + ans_st;
    }
    return ans_st;
}