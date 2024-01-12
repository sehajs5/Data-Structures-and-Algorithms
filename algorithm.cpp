#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(7);
    v.push_back(9);
    cout<<"Finding 4 ->"<<binary_search(v.begin(),v.end(),4)<<endl;
    cout<<"Upper Bound->"<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    //max, min, swap
    //reverse string
    string str="abcd";
    reverse(str.begin(),str.end());
    cout<<str<<endl;

    //rotate vector
    //rotate(begin, middle, end)
    
    cout<<"Before rotation"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"After rotation"<<endl;
    rotate(v.begin(),v.begin()+1,v.end());
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    sort(v.begin(),v.end());
    //sort based on intro sort- mixture of insertion sort, quick sort, heap sort
    for(int i:v){
        cout<<i<<" ";
    }
}