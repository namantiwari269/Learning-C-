#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number of elements";
    cin>> n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    int m = arr[n-1];
    int xor1=0;
    // for(int i =1; i<=m;i++){
    //     xor1 ^= i;
    // }
    int xor2=0;
    for(int j =0;j<n;j++){
        xor2 ^= arr[j];
        xor1 ^= j+1;
    }
    int missing_num = xor1 ^ xor2;
    
    cout<<missing_num;

}