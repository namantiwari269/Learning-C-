#include<iostream>
#include<set>
using namespace std;
//time = o(n)
int main(){

    int n;
    cout<<"enter number of elements";
    cin>> n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    int j;
    for(int i =0;i<n;i++){
        if(arr[i]==0){
            j=i;

            break;
        }
    }
    int k =j;
    for(int i=k+1;i<n;i++){
        if(arr[i]!=0){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }
    
    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}
// [1,8,7,0,5,0,5,7]
//        j i
//temp = 7
//arr[i]=0
//arr[j]=7