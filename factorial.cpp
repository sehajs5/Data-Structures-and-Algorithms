#include<iostream>
using namespace std;
int fact(int n){
    int ans=0;
    if(n==0){
        return 1;
    }
    else{
        ans= (n*fact(n-1));}
    return ans;
}
int main(){
    int sample= 4;
    cout<<fact(sample);
}