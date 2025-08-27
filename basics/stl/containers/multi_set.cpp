#include<iostream>
#include<set>

using namespace std;

int main(){
    multiset<int> ms;// sorted order and unique
    ms.insert(1);//{1}
    ms.insert(1);//{1,1}
    ms.insert(1);//{1,1,1}
    ms.insert(1);//{1,1,1,1}
    ms.erase(1); // erases all 1s

    ms.insert(1);//{1}
    ms.insert(1);//{1,1}
    ms.insert(1);//{1,1,1}
    ms.insert(1);//{1,1,1,1}
    ms.erase(ms.find(1));//{1,1,1}
    auto it = ms.find(1);
    auto it1 = it+2;
    ms.erase(it,it1);//{1}


}