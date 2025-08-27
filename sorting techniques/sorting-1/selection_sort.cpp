#include<iostream>
using namespace std;
// find smallest and swap --> selection sort
int main(){
    int n;
    cout<<"enter number of elements";
    cin>> n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    for(int i =0 ; i<n-1;i++){
        int min = i;
        for(int j =i ; j<=n-1;j++){
            if(arr[j]<arr[min]) {
                int temp =arr[min];
                arr[min] = arr[j];
                arr[j] = temp;

            }
        }
    }
    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    }

}