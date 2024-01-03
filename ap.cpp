#include<iostream>
using namespace std;
int arth(int n){
    return 3*n+7;
}
int main(){
    cout<<"What number of term?"<<endl;
    int a;
    cin>>a;
    cout<<arth(a);
}