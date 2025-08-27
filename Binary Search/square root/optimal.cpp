#include<iostream>
using namespace std;

long long floorSqrt(long long n)  {
       int low=1;
       int high = (n/2)+1;
       int ans=0;
      while(low<=high){
        long long mid= (low+high)/2;
        if(mid*mid==n) return mid;
        else if(mid*mid>n){
            high=mid-1;
        }
           else{
               low=mid+1;
              ans=mid;
         }
    }
    return ans;
}