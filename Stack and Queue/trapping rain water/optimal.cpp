#include<iostream>
using namespace std;

int trap(vector<int>& arr) {
    int n = arr.size();
    int i=0;
    int j= n-1;
    int total = 0;
    int left=0;
    int right = 0;
    while(i<j){
        if(arr[i]<=arr[j]){
            if(arr[i]<left){
                total+= left-arr[i];
            }
            else{
                left=arr[i];
            }
            i++;
        }
        else{
            if(arr[j]<right){
                total+= right-arr[j];
            }
            else{
                right=arr[j];
            }
            j--;
        }
    }
    return total;
}