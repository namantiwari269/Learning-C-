#include<iostream>
using namespace std;

int main(){
    int arr[5]; //[a,b,c,d,e]
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    arr[3] += 10;
    cout<<arr[3];
    return 0;
}