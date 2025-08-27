#include<iostream>
using namespace std;

    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
        int n1 = a.size();
        int n2=b.size();
        int i=0;
        int j=0;
        int cnt =1;
        while(i<n1 && j<n2){
            if(a[i]<=b[j]){
                if(cnt==k) return a[i];
                i++;
                cnt++;
            }
            else{
                if(cnt==k) return b[j];
                j++;
                cnt++;
            }
        }
        while(i<n1){
            if(cnt==k) return a[i];
            i++;
            cnt++;
        }
        while(j<n2){
            if(cnt==k) return b[j];
            j++;
            cnt++; 
        }
    }