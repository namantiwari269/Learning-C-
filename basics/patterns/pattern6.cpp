/*
1 2 3 4 5 6 7 
1 2 3 4 5 6 
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 
*/
#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    for(int i =0; i<x;i++){
        for(int j =0; j<x-i;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }

    return 0;
}