#include<iostream>
using namespace std;
int power(int n,int raise){
    if (raise==0){
        return 1;
    }
    if( raise== 1){
        return n;
    }
    int ans= power(n,raise/2);
    if(raise%2==0){
        return ans*ans;
    }
    else{
        return n*ans*ans;
    }
    return ans;
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