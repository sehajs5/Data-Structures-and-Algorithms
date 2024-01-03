#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<'\t';
    }
    
}

void sort01(int arr[],int n){
    int left=0;
    int right=n-1;
    while(left<right)
    {
        /* code */
        while(arr[left]==0&&left<right){
            left++;
        }
        while(arr[right]==1&&left<right){
            right--;
        }
        if(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
    printArray(arr,n);

    
}
int main(){
    int arr[]={1,1,0,0,0,0,1,0};
    int size=sizeof(arr)/sizeof(int);
    sort01(arr,size);
}