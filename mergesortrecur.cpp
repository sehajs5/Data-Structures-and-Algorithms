#include<iostream>
using namespace std;
void merge(int *arr, int s, int n){
    int mid= s+(n-s)/2;
    int len1= mid-s+1;
    int len2= n-mid; 

    int *firstarr= new int[len1];
    int *secondarr= new int[len2];

    int mainArrayIndex= s;
    for(int i=0;i<len1;i++){
        firstarr[i]=arr[mainArrayIndex++];
    }
    mainArrayIndex=mid+1;
    for(int i= 0;i<len2;i++){
        secondarr[i]=arr[mainArrayIndex++];
    }

    //merge 2 sorted arrays
    int index1= 0, index2 = 0;
    mainArrayIndex=s;
    while(index1<len1 && index2< len2){
        if(firstarr[index1]<=secondarr[index2]){
            arr[mainArrayIndex++]=firstarr[index1++];
        }
        else{
            arr[mainArrayIndex++]=secondarr[index2++];
        }
    }
    while(index1<len1){
        arr[mainArrayIndex++]=firstarr[index1++];
    }
    while(index2<len2){
        arr[mainArrayIndex++]=secondarr[index2++];
    }
    delete [] firstarr;
    delete [] secondarr;
}
void mergeSort(int *arr, int s, int n){
    if(s>=n){
        return;
    }
    int mid= s+(n-s)/2;
    mergeSort(arr,s, mid);
    mergeSort(arr, mid+1, n);
    merge(arr, s,n);
}
int main(){
    int arr[5]={5,2,4,65,1};
    mergeSort(arr,0,5-1);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}