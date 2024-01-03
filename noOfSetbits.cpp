#include<iostream>
using namespace std;
int setBits(int a){
    int count=0,i,digit=0;
    i=a;
    while(i>0){
        digit=i%2;
        if(digit==1){
            count++;
        }
        i/=2;
    }
    return count;
}
int totalBits(int x, int y){
    int n1,n2;
    n1=setBits(x);
    n2=setBits(y);
    return n1+n2;
}
int main(){
    cout<<"Enter two numbers";
    int k,l;
    cin>>k>>l;
    cout<<"Total number of bits are: ";
    cout<<totalBits(k,l);
}
