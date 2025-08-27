#include<iostream>
using namespace std;

vector<int> BuyAndSell(int arr[],int n){
    vector<int> ans;
    int maxi = INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
            maxi = arr[i];
        }
    }
    return ans;

}

int main(){
    int n;
    cout<<"enter number of elements";
    cin>> n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans;
    ans=BuyAndSell(arr,n);
}