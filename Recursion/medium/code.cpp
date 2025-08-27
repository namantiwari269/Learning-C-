#include<iostream>
using namespace std;

int myAtoi(string s) {
    int n = s.length();
    if(n==0) return 0;
    int sign = 1;
    int i=0;
    while(i<n && s[i]==' '){
        i++;
    }
    if(s[i]=='-'){
        sign =-1;
        i++;
    }
    else if(s[i]=='+')i++;
    long long num=helper(0,s,i);
    if(num*sign>INT_MAX) return INT_MAX;
    if(num*sign<INT_MIN) return INT_MIN;
    return sign * num;
}
long long helper(long long num, string s ,int i){
    if(i==s.length()||s[i]<'0' || s[i]>'9')return num;
    if (num > (long long)INT_MAX) return num;
    num = num * 10 + s[i] -'0';
    return helper(num,s,i+1);
}