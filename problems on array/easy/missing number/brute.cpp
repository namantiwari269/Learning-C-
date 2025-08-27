#include<iostream>
using namespace std;

int missing_number(int arr[],int m){
    for(int i =1;i<=m;i++){
        int flag =0;
        for(int j=0;j<=m;j++){
            if(arr[j]==i){

                flag =1;
                break;
            }
        }

        if(flag == 0){
            return i;
        }
    }
    return 0;
}

int main(){
    int n;
    cout<<"enter number of elements";
    cin>> n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }  
    int m = arr[n-1];
    cout<< missing_number(arr,m);
}