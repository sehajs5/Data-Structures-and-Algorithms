#include<iostream>
using namespace std;
int sumrecursion(int arr[], int size, int start){
    int sum=0;
    if(size==0){
        return 0;
    }
    if(start== size-1){
        return arr[start];
    }
    else{
        return arr[start]+sumrecursion(arr,size,start+1);
    }
}
int main(){
    int arr[5]={2,3,4,5,6};
    cout<<sumrecursion(arr,5,0);
}