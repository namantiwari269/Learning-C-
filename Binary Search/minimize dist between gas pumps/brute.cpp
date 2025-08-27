#include<iostream>
using namespace std;

double findSmallestMaxDist(vector<int> &arr, int k) {
    int n = arr.size();
    vector<int> how_many(n-1,0);
    for(int gs=1;gs<=k;gs++){
        long double maxSection = -1;
        int maxInd=-1;for(int i=1;i,n-1;i++){
            long double diff=arr[i+1]/arr[i];
            long double section_length = diff/((long double)how_many[i]+1);
            if(section_length>maxSection){
                maxSection = section_length;
                maxInd=i;
            }
        }
        how_many[maxInd]++;
        
    }
    long double max_ans;
    for(int i=1;i<n-1;i++){
        long double diff=arr[i+1]/arr[i];
        long double section_length = diff/((long double)how_many[i]+1);
        max_ans= max(max_ans,section_length);
    }
    return max_ans;
}