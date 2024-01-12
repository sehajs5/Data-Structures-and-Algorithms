#include<iostream>
#include<deque>
//Doubly ended queue- dynamic memory allocation- insertion deletion at both ends
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_front(0);
    for(int i:d){
        cout<<i<<endl;
    }
    // d.pop_back();
    // for(int i:d){
    //     cout<<i<<endl;
    // }
     cout<<"Element at position 1: "<<d.at(1)<<endl;
    cout<<"Deque empty? "<<d.empty()<<endl;
    cout<<"Element at first "<<d.front()<<endl;
    cout<<"Element at last "<<d.back()<<endl;
    //erase - to clear
    cout<<"Before Erase "<<d.size()<<endl;
    d.erase(d.begin(),d.end());
    cout<<"After Erase "<<d.size();
}