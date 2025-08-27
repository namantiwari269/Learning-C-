#include<iostream>
using namespace std;
//o(n)
bool check_sort(int arr[],int n){
    for(int i = 1; i<n;i++){
        if(arr[i]>=arr[i-1]){

        }
        else{
            return false;
        }
    }
    return true;
}

int main(){

    int n;
    cout<<"enter number of elements";
    cin>> n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    if(check_sort(arr,n)==true){
        cout<<"Sorted";
    }
    else{
        cout<<"not sorted";
    }

}