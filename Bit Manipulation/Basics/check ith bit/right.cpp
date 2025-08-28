#include<iostream>
using namespace std;

bool checkKthBit(int n, int k) {
    int a = n>>k;
    if((a&1)!=0){
        return true;
    }
    return false;
}