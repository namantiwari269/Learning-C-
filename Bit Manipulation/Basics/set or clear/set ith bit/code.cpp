#include<iostream>
using namespace std;

int setKthBit(int n, int k) {
    int a = 1<<k;
    return n | a;
}