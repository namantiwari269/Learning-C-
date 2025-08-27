#include<iostream>
using namespace std;

vector<int> majority(int arr[],int n){
    vector<int> ls;
    int cnt1=0;
    int cnt2 =0;
    int ele1;
    int ele2;
    for(int i=0;i<n;i++){
        if(cnt1==0 && arr[i]!=ele2){
            cnt1=1;
            ele1=arr[i];
        }
        else if(cnt2==0 && arr[i]!=ele1){
            cnt2=1;
            ele2 = arr[i];
        }
        else if(ele1==arr[i]){
            cnt1++;
        }
        else if(ele2==arr[i]){
            cnt2++;
        }
        else{
            cnt1--;
            cnt2--;
        }
    }
    return ls;
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
    ans=majority(arr,n);
}