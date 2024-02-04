#include<iostream>
using namespace std;
int getSum(int *arr, int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    // bad practise=> int arr[n];
    //good practise
    cin>>n;
    int *arr= new int[n];
    cout<<"enter variables of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum= getSum(arr,n);
    cout<<"Sum of elements: "<<sum;
}