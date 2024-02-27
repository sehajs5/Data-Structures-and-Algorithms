#include<iostream>
using namespace std;
int power(int n,int raise){
    if(raise<=0){
        return 1;
    }
    raise--;
    int a= n*power(n,raise);
    return a;
}
int main(){
    cout<<"Enter the digit"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the power of digit"<<endl;
    int a;
    cin>>a;
    cout<<power(n,a);
}