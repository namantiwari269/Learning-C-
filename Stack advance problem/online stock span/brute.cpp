#include<iostream>
using namespace std;

class StockSpanner {
public:
vector<int> li;
public:
StockSpanner() {

}
    
int next(int price) {
    li.push_back(price);
    int cnt =0;
    for(int i=li.size()-1;i>=0;i--){
        if(li[i]<=price){
            cnt++;
        }
        else{

            break;
        }
    }
    return cnt;
}
};