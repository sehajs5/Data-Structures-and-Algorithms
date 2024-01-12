#include<iostream>
#include<set>
//ALL ELEMENTS ARE UNIQUE
//cannot modify an element- insert or delete only
//sorted
//unordered set is faster and not sorted
//complexity- O(log n) for insert, erase, find, count
//complexity- O(1) for size, beign, end, empty
using namespace std;
int main(){
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(6);
    s.insert(0);
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;
    //can use erase- erase needs begin and end value

    cout<<"S is present or not? "<<s.count(5)<<endl;

    //find function- returns the iterator if the object is found
    //iterator- like a pointer, points to an element inside the container
    set<int>:: iterator it= s.find(5);
    cout<<"value present at iterator it "<<*it;
    cout<<endl;
    for(auto j= it;j!=s.end();j++){
        cout<<*j<<endl;
    }
}