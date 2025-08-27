#include<iostream>
#include<queue>

using namespace std;

double findSmallestMaxDist(vector<int> &arr, int k) {
    int n = arr.size();
    vector<int> how_many(n-1,0);
    priority_queue<pair<long double,int>> pq;
    for(int i=0;i<n-1;i++){
        pq.push({arr[i+1]-arr[i],i});
    }
    for(int gs=1;gs<k;gs++){
        auto tp= pq.top();
        pq.pop();
        int sec_ind = tp.second;
        how_many[sec_ind]++;
        long double indiff = arr[sec_ind+1]-arr[sec_ind];
        long double new_sec_len = indiff/(long double)(how_many[sec_ind]+1);
        pq.push({new_sec_len,sec_ind});
    }
    return pq.top().first;
}