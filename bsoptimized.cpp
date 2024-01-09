#include<iostream>
using namespace std;
void bubbleSort(vector<int>& arr, int n)
{   flag =0;
    for(int j=0;j<n;j++){
        flag=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag=1;
            swap(arr[i],arr[i+1]);
        }
    }
    if(flag==0){
        break;
    }
}
}