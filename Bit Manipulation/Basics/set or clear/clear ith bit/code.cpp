#include<iostream>
using namespace std;

int clearKthBit(int n, int k) {
    int a = ~(1<<k);
    return (a & n);
    

}