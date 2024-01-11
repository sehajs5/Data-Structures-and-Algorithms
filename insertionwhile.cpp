#include <iostream>
void insertionSort(int n, vector<int> &arr){
    int i=1;
    while(i<n){
    int j=i-1;
    int temp=arr[i];
    while(j>=0&&temp<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
            arr[j+1]=temp;
            i++;
    }
}
