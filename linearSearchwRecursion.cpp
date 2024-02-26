#include<iostream>
using namespace std;
bool search(int arr[], int size, int target){
    if(size==0){
        return false;
    }
    if(size==1){
        if(arr[0]==target){
            return true;
        }else{return false;}
    }
    if(arr[0]==target){
        return true;
    }
    bool remainingPart= search(arr+1,size-1,target);
    return remainingPart;
}
int main(){
    int arr[5]={2,5,7,9,10};
    cout<<search(arr,5,5);
}