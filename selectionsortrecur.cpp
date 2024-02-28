#include<iostream>
using namespace std;
void selectionSort(int arr[], int s, int size){
    if(size==0 || size==1||s==size-1){
        return;
    }
    int min= s;
    for(int i=s+1;i<size;i++){
        if(arr[i]<arr[min]){
            min=i;
        }
    }
    swap(arr[s],arr[min]);
    selectionSort(arr, s+1, size);
}
int main(){
    int arr[5]={5,2,4,65,1};
    selectionSort(arr,0,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}