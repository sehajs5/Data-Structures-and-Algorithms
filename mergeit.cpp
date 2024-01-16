#include<iostream>
#include<vector>
using namespace std;
void merge(int nums1[],int m, int nums2[],int n,int arr3[]){
    int i=0,j=0;
    int count=0;
    int k=0;
    while(i<m&&j<n){
        if(nums1[i]<nums2[j]){
            arr3[count++]=nums1[i++];
        }
        else{
            arr3[count++]=nums2[j++];
        }
        // if(nums1[i]==nums2[j]){
        //     for(int l=0;l<2;l++){
        //         arr3[count]=nums1[i];
        //         count++;
        //     }
        //     j++;
        //     i++;
        //     k++;
        // }
    }
    while(i<m){
        arr3[count++]=nums1[i++];
    }
    while(j<n){
        arr3[count++]=nums2[j++];
    }
}
void print(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}
int main(){
    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};
    int arr3[8]={0};
    merge(arr1,5,arr2,3,arr3);
    print(arr3,8);
}