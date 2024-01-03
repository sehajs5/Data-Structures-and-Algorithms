#include<iostream>
using namespace std;
int uniqueElement(int arr[], int size){
    int flag=0,i=0,j=0,ans=0,count=0;
    for(i=0;i<size;i++){
        // count=0;
        // for(j=0;j<size;j++){
        //     if(arr[j]^arr[i]==0){
        //         count++;
        //     }
        // }
        // if(count==1){
        //     ans=arr[i];
        // }
    ans= ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[]={1,2,1,2,4,3,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    int unique=uniqueElement(arr,size);
    cout<<"Unique Element is: "<< unique;
}