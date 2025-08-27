#include<iostream>
#include<vector>
using namespace std;

// divide and merge
void merge(vector<int> &arr,int low,int mid,int high){
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.emplace_back(arr[left]);
            left++;
        }
        else{
            temp.emplace_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.emplace_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.emplace_back(arr[right]);
        right++;
    }
    for(int i =low ;i<=high;i++ ){
        arr[i]= temp[i-low];
    }
}
void merge_sort(vector<int> &arr, int low , int high){
    if(low>=high) return;
    int mid= (low + high)/2;
    merge_sort(arr, low,mid);
    merge_sort(arr, mid+1,high);
    merge(arr,low,mid,high);
    
}

int main(){
    int n;
    cout<<"enter number of elements";
    cin>> n;
    vector<int> arr;
    for(int i =0; i<n;i++){
        int a;
        cin>>a;
        arr.emplace_back(a);
    }
    cout<<arr.size();
    merge_sort(arr,0,n-1);
    for(int i =0; i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}