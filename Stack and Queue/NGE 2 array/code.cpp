#include<iostream>
#include<map>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    map<int ,int> nge;
    stack<int> st;
    int n = nums2.size();
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && st.top()<=nums2[i]){
            st.pop();
        }
        nge[nums2[i]]= st.empty()?-1:st.top();
        st.push(nums2[i]);
    }
    vector<int> ans(nums1.size());
    for(int i=0;i<nums1.size();i++){
        ans[i]= nge[nums1[i]];
    }
    return ans;
}