#include<iostream>
using namespace std;

vector<int> BuyAndSell(int arr[],int n){
    vector<int> ans;
    for(int i=0;i<n;i++){
        bool leader = "true";
        for(int j =i+1;j<n;j++){
            if(arr[i]<arr[j]){
                leader= "false";
            }
        }
        if(leader = "true") ans.push_back(arr[i]);
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