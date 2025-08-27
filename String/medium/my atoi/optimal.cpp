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
    long long num=0;
    while(i<n && s[i]>='0' && s[i]<='9'){
        num =num*10 + s[i]-'0';
        if(num*sign>=INT_MAX) return INT_MAX;
        if(num*sign<=INT_MIN) return INT_MIN;
        i++;
    }
    return sign * num;

}