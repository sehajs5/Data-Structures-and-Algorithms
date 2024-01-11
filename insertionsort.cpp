#include <iostream> 
void insertionSort(int n, vector<int> &arr){
    for(int i=1;i<n;i++){
        for(int j=i-1;j>=0;j--){
            int temp=arr[i];
            if(arr[j]>temp){
                arr[j+1]=arr[j];
                arr[j]=temp;
                i=j;
            }
            else{
                break;
            }
        }
    }
}