/*
A 
A B 
A B C 
A B C D 
*/
#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    for(int i =0; i<x;i++){
        for(char j ='A'; j<='A'+i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}