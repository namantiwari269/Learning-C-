#include<iostream>
using namespace std;

int maximalRectangle(vector<vector<char>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();

   vector<vector<int>> ans(n,vector<int>(m,0));
   for(int i =0;i<n;i++){
    for(int j=0;j<m;j++){
        ans[i][j]= matrix[i][j]-'0';
    }
   }
   for(int j=0;j<m;j++){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+= ans[i][j];
        if(ans[i][j]==0) sum=0;
        else{
            ans[i][j]=sum;
        }
    }
   }
    int longest =0;
    for(int i=0;i<n;i++){
        longest= max(longest , largestRectangleArea(ans[i]));
    }
   return longest;
}
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
