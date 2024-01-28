#include<iostream>
using namespace std;
int gcd(int a, int b){
    int ans=0;
    while(a!=0 ||b!=0){
        if(a>b){
            a-=b;
        }
        else{
            b-=a;
        }
        if(a==0){
            ans=b;
            return ans;
        }
        if(b==0){
            ans=a;
            return ans;
        }
    }
    return -1;
}
int main(){
    int a=25,b=50;
    cout<<gcd(a,b);
}