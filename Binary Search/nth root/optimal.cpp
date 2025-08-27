#include<iostream>
using namespace std;

int NthRoot(int x, int n) {
      int low=1;
      int high = n;
      int ans=0;
    while(low<=high){
      long long mid= (low+high)/2;
      long long prod= 1;
      for(int i=0;i<x;i++){
        prod*=mid;
      }
      if(prod==n) return mid;
      else if(prod>n){
          high=mid-1;
      }
         else{
             low=mid+1;
       }
   }
   return -1;   
   }