/*
A B C D E F G 
A B C D E F 
A B C D E 
A B C D 
A B C 
A B 
A
*/
#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    for(int i =0; i<x;i++){
        for(char j ='A'; j<'A'+x-i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}