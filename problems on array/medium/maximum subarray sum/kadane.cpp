#include <iostream>
#include<map>
using namespace std;

int maxsubsum(int arr[],int n){
    int sum =0;
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxi=max(maxi,sum);
        if(sum<0){
            sum=0;
        }
    }
    return maxi;
}

int main(){
    int n;
    cout<<"enter number of elements";
    cin>> n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    cout<<maxsubsum(arr,n);
}