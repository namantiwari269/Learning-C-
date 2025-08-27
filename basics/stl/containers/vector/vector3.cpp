#include<iostream>
using namespace std;

int main(){
    vector<int> v = {10,20,12,23};
    v.erase(v.begin()+1);//{10,12,23}
    vector<int> v1 = {10,20,30,40,50};
    v1.erase(v1.begin()+1 , v1.begin()+3);//{10,40,50}
    //insert
    vector<int> v2(2,100);//{100,100}
    v2.insert(v.begin(),300);//{300,100,100}
    v2.insert(v.begin()+1,2,10);//{300,10,10,100,100}
    vector<int> copy(2,400);//{400,400}
    v2.insert(v.begin(),copy.begin(),copy.end());//{400,400,300,10,10,100,100}
    cout<<v2.size();// 7
    v2.pop_back(); // {400,400,300,10,10,100,100}
    /*
    v1 -> {10,40,50}
    v2 -> {400,400,300,10,10,100,100}
    */
   v1.swap(v2); 
    /*
    v2 -> {10,40,50}
    v1 -> {400,400,300,10,10,100,100}
    */
   v1.clear(); // erases everything
   cout<<v.empty(); // tells if vector is empty or not
    return 0;
}