#include <iostream>
#include<map>
using namespace std;

int maxsubsum(int arr[],int n){
    int sum =0;
    int ans_start=-1;
    int ans_stop=-1;
    int maxi = INT_MIN;
    int starty;
    for(int i=0;i<n;i++){
        if(sum==0) {
            starty =i;
        }
        sum+=arr[i];
        if(sum>maxi){
            maxi=sum;
            ans_start=starty;
            ans_stop=i;

        }
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