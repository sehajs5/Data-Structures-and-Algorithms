#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,4> a= {1,2,3,4};
    for(int i=0;i<4;i++){
        cout<<a[i]<<endl;
    }
    cout<<"Element at position 2: "<<a.at(2)<<endl;
    cout<<"Array empty? "<<a.empty()<<endl;
    cout<<"Element at first "<<a.front()<<endl;
    cout<<"Element at last "<<a.back()<<endl;
}
//STL Array is based on basic array