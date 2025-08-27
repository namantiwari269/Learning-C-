#include<iostream>
using namespace std;

int romanToInt(string s) {
    int n = s.size();
    if(n==0) return 0;
    unordered_map<char,int> mpp={
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000}
    };
    int total =0;     
    for(int i=0;i<n;i++){
        if(mpp[s[i]]<mpp[s[i+1]]){
            total-= mpp[s[i]];
        }
        else{
            total+= mpp[s[i]];

        }
    }
    return total;
}