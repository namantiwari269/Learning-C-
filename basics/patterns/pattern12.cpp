/*
1      1
12    21
123  321
12344321
*/
#include<iostream>
using namespace std;

int main(){
    int x ;
    cin>>x;
    for(int i =1; i<=x; i++){
        for(int j =0; j<i;j++){
            cout<<j+1;
        }
        for(int k = 2*(x-i);k>0;k--){
            cout<<" ";
        }
        for(int j =0; j<i;j++){
            cout<<i-j;
        }
        cout<<endl;
    }
    return 0;
}