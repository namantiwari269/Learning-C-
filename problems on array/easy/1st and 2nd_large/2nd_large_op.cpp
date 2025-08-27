#include<iostream>
using namespace std;
// if we do by sorting o(nlogn + n) as we cant directly select n-2 index as there may be repetition
//if by whole loop ; o(2n)
int main(){

    int n;
    cout<<"enter number of elements";
    cin>> n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    int l = arr[0];
    int sl= -1;
    for(int i =1; i<=n-1;i++){
        if(arr[i]>l){
            sl=l;
            l=arr[i];
        }
        else if(arr[i]<l && arr[i]>sl){
            sl = arr[i];
        }
    }
    cout<<"second largest="<<sl;
    
}