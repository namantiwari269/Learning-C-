#include<iostream>
#include<queue>

using namespace std;

int main(){
    //takes place in tree
    //MAX HEAP
    priority_queue<int> pq;//largest will stay on top
    pq.push(5);//{5}
    pq.push(8);//{8,5}
    pq.push(2);//{8,5,2}
    pq.emplace(15);//{15,8,5,2}
    cout<<pq.top();//15
    pq.pop();//{8,5,2}
    //for giving priority to least
    //MIN HEAP
    priority_queue<int , vector<int>,greater<int>> pq1;
    pq1.push(5);//{5}
    pq1.push(8);//{5,8}
    pq1.push(2);//{2,5,8}
    pq1.emplace(15);//{2,5,8,15}

    cout<<pq1.top();//2
    return 0;

}