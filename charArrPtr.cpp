#include<iostream>
using namespace std;
int main(){
    char ch[6]="abcde";
    cout<<ch<<endl;
    //Outputs different for arr and ch, ch prints whole array with just reference
    char *c= &ch[0];
    cout<<"c: "<<c<<endl;
    cout<<"*c: "<<*c<<endl;

    char temp='s';
    char *a= &temp;
    //prints until it meets a null character
    cout<<a;}