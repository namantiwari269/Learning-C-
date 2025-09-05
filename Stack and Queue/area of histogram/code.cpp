#include<iostream>
using namespace std;

int largestRectangleArea(vector<int>& heights) {
    vector<int> nse = next_smaller_element(heights);    
    vector<int> pse = previous_smaller_element(heights);    
    int n = heights.size();
    int longest=0;
    for(int i=0;i<n;i++){
        int temp =1;
        temp= heights[i]*(nse[i]-pse[i]-1);
        longest=max(longest,temp);
    }
    return longest;
}
vector<int> next_smaller_element(vector<int>& arr){
    int n = arr.size();
    vector<int>nse(n);
    stack<int> st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();
        nse[i]= st.empty()?n:st.top();
        st.push(i);
    }
    return nse;
}
vector<int> previous_smaller_element(vector<int>& arr){
    int n = arr.size();
    vector<int>pse(n);
    stack<int> st;
    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();
        pse[i]= st.empty()?-1:st.top();
        st.push(i);
    }
    return pse;
}