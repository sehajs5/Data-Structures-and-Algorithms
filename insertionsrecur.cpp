#include<iostream>
using namespace std;
void insertionSort(int arr[], int size){
    if(size==0 || size==1){
        return;
    }
    for(int i=size-1;i>=0;i--){
        if(arr[i]<arr[i-1]){
            swap(arr[i],arr[i-1]);
        }
    }
    insertionSort(arr, size-1);
}
int main(){
    int arr[5]={5,2,4,65,1};
    insertionSort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}