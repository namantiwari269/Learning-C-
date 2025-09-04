#include<iostream>
using namespace std;

int sumSubarrayMins(vector<int>& arr) {
    int n = arr.size();
    int mod = (int)1e9+7;
    int total=0;
    vector<int> nse= next_smaller_element(arr,n); 
    vector<int> psee= previous_smaller_equal_element(arr,n); 
    for(int i=0;i<n;i++){
        int left= i-psee[i];
        int right=nse[i]-i;
        total= (total+(arr[i]*right*1LL*left)%mod)%mod;
    }
    return total;
}
vector<int> next_smaller_element(vector<int> &arr,int n){
    stack<int> st;
    vector<int> nse(n);
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();
        nse[i]= st.empty()?n:st.top();
        st.push(i);
    }
    return nse;
}
vector<int> previous_smaller_equal_element(vector<int> &arr,int n){
    stack<int> st;
    vector<int> psee(n);
    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]>arr[i]) st.pop();
        psee[i]= st.empty()?-1:st.top();
        st.push(i);
    }
    return psee;
}