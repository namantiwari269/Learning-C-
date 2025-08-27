#include<iostream>

using namespace std;

int mostFrequentElement(int arr[],int n) {
    int hash[100]={0};
    for(int i =0;i<n;i++){
        hash[arr[i]]+=1;
    }
    int great =0;
    for(int i =0;i<100;i++){
        if(hash[i]>great) great=i;
    }
    return great;

}
int main(){
    int arr[5] = {4, 4, 5, 5, 6};
    cout<<mostFrequentElement(arr,5);
}