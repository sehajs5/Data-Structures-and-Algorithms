#include<iostream>
using namespace std;
int main(){
    int arr[10]={0,4,5,6,2,5,6,2};
    cout<<"Address of an array is: "<<arr<<endl;
    cout<<"Address of an array is: "<<&arr[0]<<endl;
    cout<<"*arr: "<<*arr<<endl;
    cout<<"*arr+1: "<<*arr+1<<endl;
    cout<<"*(arr+1): "<<*(arr+1)<<endl;
    cout<<"*(arr)+1: "<<*(arr)+1<<endl;
    cout<<"arr[2]: "<<arr[2]<<endl;
    cout<<"*(arr+2): "<<*(arr+2)<<endl;
    //arr[i]=*(arr+i)OR i[arr]=*(i+arr)
    cout<<"2[arr]: "<<2[arr]<<endl;
    int *p= arr;
    cout<<*p+1<<endl;

    cout<<"Size of arr: "<<sizeof(arr)<<endl;
    cout<<"Size of pointer: "<<sizeof(p)<<endl;
    cout<<"Size of *p: "<<sizeof(*p)<<endl;
    cout<<"Size of &p: "<<sizeof(&p)<<endl;
    cout<<"&p: "<<&p<<endl;
    cout<<"*p: "<<*p<<endl;
    cout<<"p: "<<p<<endl;
    cout<<"arr: "<<arr<<endl;

    //ERROR: arr= arr+1
    // NOT error
    p= p+1;
    cout<<"p after incrementing: "<<p;
}