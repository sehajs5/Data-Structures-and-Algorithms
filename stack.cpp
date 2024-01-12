#include<iostream>
#include<stack>
//FILO-first in last out- O(1)
using namespace std;
int main(){
    stack<string>s;
    s.push("Sehaj");
    s.push("Singla");
    s.push("CSE");
    cout<<"Top Element "<<s.top()<<endl;
    s.pop();
    cout<<"Top Element "<<s.top()<<endl;
    //other functions: empty(),size()
}