#include<iostream>
using namespace std;
int main(){
    int arr[]={9,5,4,3,1,2};
    int size=sizeof(arr)/sizeof(int);
    int temp;
    for(int i=0;i<size/2;i++){
        temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
    for ( int j = 0; j < size; j++)
    {
        cout<<arr[j]<<endl;
    }
    
}