/*
A 
B B 
C C C 
D D D D 
E E E E E 
F F F F F F 
G G G G G G G 
*/
#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    for(int i =0; i<x;i++){
        char ch = 'A'+ i;
        for(int j =0; j<i+1;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }

    return 0;
}