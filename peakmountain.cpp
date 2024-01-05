#include<iostream>
#include<vector>
using namespace std;
    int peakIndexInMountainArray(vector<int>& arr) {
        int start=0;
        int size=arr.size();
        int end=size-1;
        int mid= start+(end-start)/2;
        int ans=-1;
        while(start<=end){
            if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
                ans=mid;
                return ans;
            }
            if(arr[mid]<arr[mid-1]){
                end=mid-1;
            }
            if(arr[mid]>arr[mid+1]){
                start=mid+1;
            }
            mid= start+(end-start)/2;
        }
        return ans;}
int main(){
    vector<int>arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(0);
    cout<<peakIndexInMountainArray(arr);
}