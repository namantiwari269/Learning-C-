#include<iostream>

using namespace std;
int cnt =0;
void print(){
    cout<<cnt<<endl;
    cnt++;
    if(cnt==3) return;
    print();
}


int main(){
    print();
    return 0;
}