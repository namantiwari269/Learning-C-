#include<iostream>
using namespace std;


vector<int> nextGreaterElements(vector<int>& nums) {
    stack<int> st;
    vector<int> ans;
    for(int i=nums.size()-1;i>=0;i--){
        while(!st.empty() && st.top()<=nums[i]){
            st.pop();
        }
        if(st.empty()){
            ans.push_back(-1);
            st.push(nums[i]);
        }
        else{
            ans.push_back(st.top());
            st.push(nums[i]);
        }
    }
    return ans;     
}