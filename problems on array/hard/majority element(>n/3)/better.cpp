#include<iostream>
#include<map>
using namespace std;

vector<int> majority(int arr[],int n){
    vector<int> ls;
    map<int,int> mpp;
    int mini = n/3 +1;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
        if(mpp[arr[i]]==mini){
            ls.push_back(arr[i]);
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