#include<iostream>
using namespace std;

void get(int a, int b) {
    a=a^b;
    b=a^b;
    a=a^b;
    return;
}