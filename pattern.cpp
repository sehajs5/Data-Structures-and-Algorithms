#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n,i,j,k,l,count=1;
    cout<<"Enter the number of lines";
    cin>>n;
    for(i = n;i>0;i--){
        for(j=1;j<=i;j++){
            cout<<j;
        }
        for(k=0;k<n-i;k++){
            cout<<"*";
        }
        for(k=0;k<n-i;k++){
            cout<<"*";
        }
            for(j=i;j>0;j--){
            cout<<j;
        }

        cout<<endl;

    }

    return 0;
}