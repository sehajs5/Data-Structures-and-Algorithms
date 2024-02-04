#include<iostream>
using namespace std;
//return by reference function- bad practise because scope of variables is limited
// int& update2(int n){
//     int num= n;
//     int &ans= num;
//     return ans;
// }
void update(int &n){
    n++;
}
int main(){
    int i=5;
    int &j=i;
    //i and j both point to same variable
    cout<<"i: "<<i<<"j: "<<j<<endl;
    i++;
    j++;
    cout<<"After incrementing "<<endl<<"i: "<<i<<" j: "<<j<<endl;
    update(i);
    cout<<"After update function hrough pass by reference"<<endl<<i<<endl;
}