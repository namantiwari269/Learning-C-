#include<iostream> 
using namespace std;

long long subArrayRanges(vector<int>& nums) {
    return sumSubarrayMaxs(nums)-sumSubarrayMins(nums);
}
long long sumSubarrayMins(vector<int>& arr) {
    int n = arr.size();
    long long total=0;
    vector<int> nse= next_smaller_element(arr,n); 
    vector<int> psee= previous_smaller_equal_element(arr,n); 
    for(int i=0;i<n;i++){
        long long left= i-psee[i];
        long long right=nse[i]-i;
        total= (total+(arr[i]*right*1LL*left));
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
//////
long long sumSubarrayMaxs(vector<int>& arr) {
    int n = arr.size();
    long long total=0;
    vector<int> nge= next_greater_element(arr,n); 
    vector<int> pgee= previous_greater_equal_element(arr,n); 
    for(int i=0;i<n;i++){
        long long left= i-pgee[i];
        long long right=nge[i]-i;
        total= (total+(arr[i]*right*1LL*left));
    }
    return total;
}
vector<int> next_greater_element(vector<int> &arr,int n){
    stack<int> st;
    vector<int> nge(n);
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && arr[st.top()]<=arr[i]) st.pop();
        nge[i]= st.empty()?n:st.top();
        st.push(i);
    }
    return nge;
}
vector<int> previous_greater_equal_element(vector<int> &arr,int n){
    stack<int> st;
    vector<int> pgee(n);
    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]<arr[i]) st.pop();
        pgee[i]= st.empty()?-1:st.top();
        st.push(i);
    }
    return pgee;
}