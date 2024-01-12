#include<iostream>
#include<vector>
using namespace std;
//dynamic array- doubles the size of vector when it reaches the end

int main(){
    vector<int> v;
    cout<<"Size: "<<v.capacity()<<endl;
    //0
    v.push_back(1);
    cout<<"Size: "<<v.capacity()<<endl;
    //1
    v.push_back(2);
    cout<<"Size: "<<v.capacity()<<endl;
    //2
    v.push_back(3);
    cout<<"Size: "<<v.capacity()<<endl;
    //4

    //can perform pop operation
    cout<<"Before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();
    cout<<"After pop"<<endl;
    for(int j:v){
        cout<<j<<" ";
    }
    cout<<endl;
    //to clear vector- size will go zero
    // size- no of elements
    //capacity- space allocated to vector
    cout<<"Capacity before clear: "<<v.capacity()<<endl;
    cout<<"Size before clear: "<<v.size()<<endl;
    v.clear();
    cout<<"Capacity after clear: "<<v.capacity()<<endl;
    cout<<"Size after clear: "<<v.size()<<endl;

}