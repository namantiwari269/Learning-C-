#include<iostream>
using namespace std;

vector<int> majority(int arr[],int n){
    vector<int> ls;
    for(int i=0;i<n;i++){
        if(ls.size()==0||ls[0]!=arr[i]){
            int cnt=0;
            for(int j=0;j<n-1;j++){
                if(arr[j]==arr[i]){
                    cnt++;
                }
            }
            if(cnt>n/3){
                ls.push_back(arr[i]);
            }
        }
        if(ls.size()==2){
            break;
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