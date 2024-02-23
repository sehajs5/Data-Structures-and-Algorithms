#include<iostream>
#include<math.h>
using namespace std;
int powerOf2(int a){
    if(a==0){
        return 1;
    }
    a-=1;
    int ans= 2*powerOf2(a);
    return ans;
}
int main(){
    int pow= 6; 
    cout<<powerOf2(pow);
}