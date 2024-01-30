#include<iostream>
using namespace std;
int main(){
    int num=5;
    cout<<"Address of num: "<<&num<<endl;
    int *ptr= &num; //Always initialise it, not initialising is bad practise
    cout<<"Value at *ptr: "<<*ptr<<endl;
    cout<<"Value at ptr: "<<ptr<<endl;
    cout<<"Size of num: "<<sizeof(num)<<endl;
    cout<<"Size of ptr: "<<sizeof(ptr)<<endl;
    //Initializing using Null Pointer
    double s= 4.56;
    double *d= 0;
    d=&s;
    cout<<"Value of s"<<s<<endl;
    cout<<"Value of *d"<<*d<<endl;
    cout<<"Value of d"<<d<<endl;
    cout<<"Incrementing ptr, before increment"<<*ptr<<endl;
    (*ptr)++;
    cout<<"Value of *ptr++, after"<<*ptr;
    //copy pointer
    int *q=ptr;
    cout<<"Value of q"<<q<<endl;
    cout<<"Value of *q"<<*q<<endl;
    cout<<"Value of ptr"<<q<<endl;
    cout<<"Value of *ptr"<<*q<<endl;
    //both pointers pointing same place
    
    //Pointer Arithmetics
    /*When a pointer is incremented, the pointer will move further 
    by adding the size of type of variable, ex: ptr=100, ptr++= 104*/
    cout<<ptr<<endl;
    ptr= ptr+1;
    cout<<ptr;
}
