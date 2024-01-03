#include<iostream>
using namespace std;
int findMax(int arr[],int size){
    int max=0,i=0;
    for(i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int findMin(int arr[],int size){
    int min,i=0;
    min=arr[i];
    for(i=0;i<size;i++){
        if(arr[i]<=min){
            min=arr[i];
        }
    }
    return min;
}
int inbuiltMin(int arr[],int size){
    int mini=INT_MAX;
    int i=0;
    for(i=0;i<size;i++){
        mini=min(mini,arr[i]);
    }
    return mini;

}
int inbuiltMax(int arr[],int size){
    int maxi=INT_MIN;
    int i=0;
    for(i=0;i<size;i++){
        maxi=max(maxi,arr[i]);
    }
    return maxi;

}
int main(){
    int arr[]={84,56,101,108,-14};
    int high,low;
    int size=sizeof(arr)/sizeof(int);
    high=inbuiltMax(arr,size);
    low=inbuiltMin(arr,size);
    cout<<"Max: "<<high<<endl<<"Min: "<<low;
}