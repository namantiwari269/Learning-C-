/*
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 21 
22 23 24 25 26 27 28 
*/
#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    int a=1;
    for(int i =1; i<=x;i++){
        for(int j =0; j<i;j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }

    return 0;
}