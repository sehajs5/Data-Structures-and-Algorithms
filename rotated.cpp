#include<iostream>
#include<vector>
using namespace std;
int getPivot(vector<int> & arr, int n){
    int s=0;
    int e=n-1;
    int mid= s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

int binarySearch(vector<int>& arr,int s,int e, int k){
    int start=s;
    int end=e;
    int mid=start+(end-start)/2;
    while(start<=end){

        if(arr[mid]==k){
            return mid;
        }
        if(arr[mid]<k){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid= start+(end-start)/2;
    }
    return -1;
}

int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int pivot= getPivot(arr,n);
    int ans=-1;
    if(arr[pivot]<=k&&k<=arr[n-1]){
        int s=pivot;
        ans= binarySearch(arr, s, n-1, k);
    }
    else{
        ans= binarySearch(arr, 0, pivot-1, k);
    }
    return ans;
}
int main(){
    vector<int>arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(11);
    arr.push_back(13);
    arr.push_back(17);
    int size=arr.size();
    int ans= search(arr,size,6);
    cout<<ans;
}