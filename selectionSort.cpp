#include<iostream>
using namespace std;
int minValue(vector<int>& arr, int s,int n){
    int mini= arr[s];
    int ans=s;
    for(int i=s+1;i<n;i++){
        if(mini>arr[i]){
            mini=arr[i];
            ans=i;
        }
    }
    return ans;
}
void selectionSort(vector<int>& arr, int n)
{   
    for(int i=0;i<n-1;i++){
        int minIndex=minValue(arr, i,n);
        if(minIndex!=i){
        swap(arr[i],arr[minIndex]);
        }
    }
    
}