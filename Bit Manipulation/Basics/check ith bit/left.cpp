#include<iostream>
using namespace std;


bool checkKthBit(int n, int k) {
    int a = 1<<k;
    if(n&a != 0){
        return true;
    }
    return false;
}
