#include<iostream>
using namespace std;

int toggleKthBit(int n, int k) {
    int a = 1<<k;
    return n ^ a;
}