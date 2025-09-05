#include<iostream>
using namespace std;

int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    int longest=0;
    stack<int> st;
    for(int i=0;i<n;i++){
        if(st.empty()) st.push(i);
        else{
            while(!st.empty() && heights[st.top()]>heights[i]){
                int el=heights[st.top()];
                st.pop();
                int ar= st.empty()?el*i:el *(i-st.top()-1);
                longest=max(longest,ar);
            }
            st.push(i);
        }
    }
    while(!st.empty()){
        int el=heights[st.top()];
        st.pop();
        int ar= st.empty()?el*n:el *(n-st.top()-1);
        longest=max(longest,ar);
    }
    return longest;
}