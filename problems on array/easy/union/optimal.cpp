#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    vector <int> arr1;
    cout<<"enter the number of elements : ";
    cin>>n;
    for(int i =0;i<n;i++){
        int a;
        cin>>a;
        arr1.push_back(a);
    }
    int m;
    vector<int> arr2;
    cout<<"enter the number of elements : ";
    cin>>m;
    for(int i =0;i<m;i++){
        int b;
        cin>>b;
        arr2.push_back(b);
    }
    int i=0;
    int j =0;
    vector<int> uni;
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            if(uni.size() == 0 || uni.back() != arr1[i]){
                uni.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(uni.size() == 0 || uni.back() != arr2[j]){
            
                uni.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i<n){
        if(uni.size() == 0 || uni.back() != arr1[i]){
            uni.push_back(arr1[i]);
        }
        i++;
    }
    while(j<m){
        if(uni.size() == 0 || uni.back() != arr2[j]){   
            uni.push_back(arr2[j]);
        }
        j++;
    }
    for(int i =0;i< uni.size();i++){
        cout<<uni[i]<<" ";
    }
    
}