#include<iostream>
using namespace std;

int BuyAndSell(int arr[],int n){
    int profit=0;
    int mini=arr[0];
    for(int i=0;i<n;i++){
        int cost = arr[i]-mini;
        profit = max(profit,cost);
        mini=min(arr[i], mini);
    }
    return profit;
}

int main(){
    int n;
    cout<<"enter number of elements";
    cin>> n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }

    cout<<BuyAndSell(arr,n);
}