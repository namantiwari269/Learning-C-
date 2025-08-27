#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<int> q;//FIFO
    q.push(1);//{1}
    q.push(3);//{1,3}
    q.emplace(5);//{1,3,5}
    q.back()+=5;

    cout<<q.back();//10
    cout<<q.front();//1
    q.pop();//{3,5}
    
    cout<<q.front();//3
    return 0;

}