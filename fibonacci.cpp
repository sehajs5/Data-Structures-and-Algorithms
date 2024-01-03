#include<iostream>
using namespace std;
int main(){
    int n,j,sum=0;
    cout<<"Enter the number of terms: ";
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<"\t"<<b<<"\t";
    for(int i=1;i<n;i++){
        sum=a+b;
        cout<<sum<<"\t";
        a=b;
        b=sum;

    }

 }