#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the amount"<<endl;
    int amount,n100=0,n50=0,n20=0,n1=0;
    cin>>amount;
    // cout<<"Enter the type of notes"<<endl;
    // cin>>notes;
    if(amount>=100){
        n100=amount/100;
        amount=amount%100;
    }
    if(amount>=50){
        n50=amount/50;
        amount=amount%50;
    }
    if(amount>=20){
        n20=amount/20;
        amount=amount%20;
    }
    if(amount>=1){
        n1=amount/1;
    }
    
    cout<<"No of notes needed"<<endl;
    cout<<"100 notes: "<<n100<<endl<<"50 notes: "<<n50<<endl<<"20 notes: "<<n20<<endl<<"1 notes: "<<n1<<endl;

}