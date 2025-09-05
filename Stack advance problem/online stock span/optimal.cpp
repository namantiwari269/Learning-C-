#include<iostream>
using namespace std;

class StockSpanner {
public:
stack<pair<int,int>> st;
public:
int cnt =-1;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        while(!st.empty() && price>=st.top().first){
            st.pop();
        }
            int idx= st.empty()?-1:st.top().second;
            cnt++;
            st.push({price,cnt});
            return (cnt-idx);
        
    }
};
