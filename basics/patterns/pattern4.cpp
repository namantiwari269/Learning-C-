/*
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
6 6 6 6 6 6 
7 7 7 7 7 7 7 
*/
#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    for(int i =1; i<=x;i++){
        for(int j =0; j<i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}