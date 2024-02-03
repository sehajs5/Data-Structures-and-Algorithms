#include<iostream>
using namespace std;
void update(int **p){
    //p=p+1;- no change
   // *p=*p+1; //-yeas change
    **p=**p+1;
    
}
int main(){
    int i=5;
    int *p= &i;
    int **q= &p;
    cout<<"i: "<<i<<endl;
    cout<<"*p: "<<*p<<endl<<" p: "<<p<<" q: "<<q<<" *q: "<<*q<<" **q: "<<**q<<endl;
    //double pointer function
    update(q);
    cout<<"AFTER update function: "<<endl;
    cout<<"i: "<<i<<endl<<"p: "<<p<<endl<<"q: "<<q;
}