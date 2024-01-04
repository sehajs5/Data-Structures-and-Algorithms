#include<iostream>
#include<vector>
using namespace std;
void sort012(int *arr, int n){
    int low=0;
    int high=n-1;
    int mid=0;
    while(mid<=high){
        switch(arr[mid]){
        case 0:
            swap(arr[low],arr[mid]);
            low++;
            mid++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[high],arr[mid]);
            high--;
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
int main(){
    int arr[]={0,2,1,2,1,0,2,1};
    int size=sizeof(arr)/sizeof(int);
    sort012(arr,size);
}