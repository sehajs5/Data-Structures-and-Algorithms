#include<iostream>
using namespace std;
bool ifSorted(int arr[], int n, int start){
    int i=start;
    if(i==n-1){
        return true;
    }
    if(arr[i]<=arr[i+1]){
        i++;
        return ifSorted(arr,n,i);
    }
    return false;
}
int main(){
    int arr[5]={2,5,7,9,10};
    cout<<ifSorted(arr,5,0);
}