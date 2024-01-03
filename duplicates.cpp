#include<iostream>
using namespace std;
int duplicates(int arr[],int size){
    int ans=0;
    for (int i = 0; i < size; i++)
    {
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                ans=arr[i];
            }
        }
    }
    
    return ans;
}
int main(){
    int arr[]={1,2,3,4,4,5};
    int size=sizeof(arr)/sizeof(int);
    int dupe=duplicates(arr,size);
    cout<<"The duplicate element is: "<<dupe;
}