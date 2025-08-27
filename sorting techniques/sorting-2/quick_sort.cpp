#include<iostream>
using namespace std;
// pivot and place
int f(int arr[],int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]<=pivot && i<high){
            i++;
        }
        while(arr[j]>pivot && j>low){
            j--;
        }
        if(i<j){
            int temp = arr[i];
            arr[i]= arr[j];
            arr[j]=temp;
        }
    }
    int temp2 = arr[j];
    arr[j]= arr[low];
    arr[low]=temp2;
    return j;
}
void quick_sort(int arr[],int low,int high){
    if(low<high){
        int part = f(arr,low,high);
        quick_sort(arr,low,part-1);
        quick_sort(arr,part+1,high);

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
    quick_sort(arr,0,n-1);
    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}