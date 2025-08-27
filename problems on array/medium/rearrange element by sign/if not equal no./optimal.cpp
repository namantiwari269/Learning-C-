#include<iostream>
using namespace std;

void resign(int arr[],int n){
    vector<int> pos;
    vector<int> neg;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }
    }
    for(int i=0;i<min(pos.size(),neg.size());i++){
        arr[2*i]=pos[i];
        arr[2*i+1]=neg[i];
    }
    if(pos.size()>neg.size()){
        int index =2* neg.size();
        for(int i=neg.size();i<n;i++){
            arr[index]=pos[i];
            index++;
        }

    }
    else if(pos.size()<neg.size()){
        int index =2* pos.size();
        for(int i=pos.size();i<n;i++){
            arr[index]=neg[i];
            index++;
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

    resign(arr,n);
}