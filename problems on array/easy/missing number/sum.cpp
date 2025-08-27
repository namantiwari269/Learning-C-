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
    int real_sum =  m * (m+1)/2;
    int sum =0;
    for(int i =0; i<n;i++){
        sum += arr[i];
    }
    int missing_num = real_sum - sum;
    cout<< missing_num;

}