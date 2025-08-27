#include<iostream>
#include<set>
#include<unordered_set>

using namespace std;

int main(){
    set<int> s;// sorted order and unique
    s.insert(1);//{1}
    s.insert(2);//{1,2}
    s.emplace(2);//{1,2}
    s.insert(4);//{1,2,4}
    s.insert(3);//{1,2,3,4}

    auto it = s.find(3);//points to address of 3
    auto ita = s.find(6);//points to s.end()
    s.erase(4);//removes the element 4 not index as it takes in tree {1,2,3}
    int cnt = s.count(1); // as it stores uniques only 0,1 is an option in this case ans is 1
    s.insert(4);//{1,2,3,4}
    s.insert(5);//{1,2,3,4,5}
    auto it1 = s.find(2);
    auto it2 = s.find(4);
    s.erase(it1,it2);//{1,4,5}
    auto it = s.lower_bound(2);
    auto it = s.upper_bound(3);
    //unordered set
    unordered_set<int> us;
    //unique but not sorted , its random
    return 0;
    
}