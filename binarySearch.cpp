#include<iostream>
using namespace std;
int findElement(int arr[],int size, int key){
    int i=0;
    int end =size-1;
    int start=0;
    //to not exceed the integer range
    int mid= start+(end-start)/2;
    while(start<=end){

        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid= start+(end-start)/2;
    }
    return -1;
}
int main(){
    int arr[]={2,3,4,6,7,8,15};
    int size= sizeof(arr)/sizeof(int);
    int pos=findElement(arr,size,6);
    cout<<pos;
}