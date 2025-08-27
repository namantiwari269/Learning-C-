#include<iostream>
using namespace std;

int minDays(vector<int>& bloomDay, int m, int k) {
    int n = bloomDay.size();
    if((long long)m*k>(long long)n) return -1;
    int low = *min_element(bloomDay.begin(),bloomDay.end());
    int high = *max_element(bloomDay.begin(),bloomDay.end());
    int ans;
    while(low<=high){
        int mid = low+(high-low)/2;
        bool p= possible(bloomDay,mid,m,k);
        if(p==false){
            low=mid+1;
        }
        else{
            ans= mid;
            high=mid-1;
        }
    } 
    return ans;   
}
bool possible(vector<int> &bloomDay,int day,int m ,int k){
    int cnt =0;
    int bloom=0;
    for(int i=0;i<bloomDay.size();i++){
        if(bloomDay[i]<=day){
            cnt++;
        }
        else{
            bloom+= cnt/k;
            cnt=0;
        }

    }
    bloom+=cnt/k;
    if(bloom>=m) return true;
    else return false;

}