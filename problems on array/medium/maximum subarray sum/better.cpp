#include <iostream>
#include<map>
using namespace std;

int maxsubsum(int arr[],int n){
    int maxi=0;
    for(int i=0;i<n;i++){
        int sum =0;
        for(int j =i;j<n;j++){
            sum+=arr[j];
            maxi = max(maxi,sum);
        }
    }
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