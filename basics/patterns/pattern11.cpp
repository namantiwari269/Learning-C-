/*
1
01
101
0101
10101
010101
1010101
*/
#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    for(int i =1; i<=x;i++){
        for(int j =0; j<i;j++){
            if((i-j)%2!=0){
                cout<<1;
            }
            else{
                cout<<0;
            }
        }
        cout<<endl;
    }

    return 0;
}