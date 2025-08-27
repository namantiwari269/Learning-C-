#include<iostream>
using namespace std;

string largestOddNumber(string num) {
    int n = num.size();
    int i=n-1;
    int largest = 0;
    while(i>=0){
        int no= num[i]-'0';
        if(no%2==1){
            return num.substr(0,i+1);
        }
        i--;
    }
    return "";
}