#include<iostream>
using namespace std;

void immediateSmaller(vector<int>& arr) {
    stack<int> st;
    int n = arr.size();
    int i = n0;
    while(i<n){
        if(st.empty()){
            st.push(arr[i]);
            arr[i]=-1;
        }
        else{
            while(!st.empty() && arr[i]>st.top()){
                st.pop();
            }
            if(st.empty()){
                st.push(arr[i]);
                arr[i]=-1;
            }
            else{
                int a = arr[i];
                arr[i]=st.top();
                st.push(a);
            }
        }
        i++;
    }
}