#include <iostream>
#include<vector>
using namespace std; 
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    int i=0;
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int fplace=-1;
    int lplace=-1;
    pair<int,int>ans;
    while(start<=end){
        if(arr[mid]==k){
            end=mid-1;
            fplace=mid;
        }
        if(arr[mid]>k){
            end=mid-1;
        }
        if(arr[mid]<k){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    start=0;
    end=n-1;
    mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==k){
            start=mid+1;
            lplace=mid;
        }
        if(arr[mid]>k){
            end=mid-1;
        }
        if(arr[mid]<k){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    ans.first=fplace;
    ans.second=lplace;
    return ans;
    
}
int main(){
    vector<int>arr;
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(5);
    arr.push_back(5);
    arr.push_back(5);
    pair<int,int>ans= firstAndLastPosition(arr,arr.size(),1);
    cout<<ans.first<<ans.second;
}