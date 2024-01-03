#include<iostream>
using namespace std;
void swapAlternate(int arr[], int size){
    int i=0,j=0,temp=0;
    for(int i=0;i<size;i+=2){
        if(i+1<size){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        }
        
    }
    for(j=0;j<size;j++){
        cout<<arr[j]<<"\t";
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int size=sizeof(arr)/sizeof(int);
    swapAlternate(arr,size);
}