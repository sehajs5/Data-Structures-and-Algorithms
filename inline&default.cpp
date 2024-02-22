#include<iostream>
using namespace std;
//inline functions- suggestion to the compiler to shorten the code. totally depends upon the compiler
// applicable when function body is of one line and sometimes when the func body is 2 to 3 but not more than that
inline int getMax(int &a, int &b){
    return a>b?a:b;
}
void printarr(int arr[], int size, int start=0){ // start has a default argument in case the user does not pass a value to the argument start
    //only rightmost element can be default- go from right to left
    for (int i=start; i<size;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int a=1,b=2;
    int ans= getMax(a,b);
    cout<<ans<<endl<<endl;

    //default argument call
    int arr[5]= {1,2,4,5,5};
    printarr(arr, 5);
}

//inline ads- no function call and no extra storage used
