#include<iostream>
using namespace std;

int missing_number(int arr[],int n){
    int m = arr[n-1];
    vector<int> hash(m+1,0);
    for(int i=0;i<n;i++){
        hash[arr[i]]=1;
    }
    for(int j =1;j<=m;j++){
        if(hash[j]==0){
            return j;
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
    cout<<missing_number(arr,n);
}