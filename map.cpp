#include<iostream>
#include<map>
//MAP- stores in key, value pairs- keys are unique for all but value can be same
//one key points to only one value
//map- sorted
//unordered map- not sorted- O(1)
//Map- Complexity- O(log n)
using namespace std;
int main(){
    map<int, string> m;
    //format- m[key]= value
    m[1]="Sehaj";
    m[2]="Singla";
    m[3]="CSE";
    //other way to insert
    // m.insert({5,"Chandigarh"});
    for(auto i: m){
        cout<<i.first<<endl;
    }
    cout<<"Finding 3: "<<m.count(3)<<endl;
    m.erase(3);  

    for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    auto it= m.find(2);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).second<<endl;
    }
}