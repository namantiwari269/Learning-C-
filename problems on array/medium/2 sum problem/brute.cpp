#include<iostream>
using namespace std;

string two_sum(int arr[],int n ,int k){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)continue;
            if(arr[i]+arr[j]==k){
                return "yes";//or indexes i and j
            }
        }
    }
    return "no";
}

int main(){
    int n;
    cout<<"enter number of elements";
    cin>> n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"\nenter a number:";
    cin>>k;
    string a = two_sum(arr,n,k);
}