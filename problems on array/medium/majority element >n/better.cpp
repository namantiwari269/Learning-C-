#include <iostream>
#include<map>
using namespace std;

int majority_ele(int arr[],int n){
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it : mpp){
        if(it.second>n/2){
            return it.first;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"enter number of elements";
    cin>> n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    cout<<majority_ele(arr,n);
}