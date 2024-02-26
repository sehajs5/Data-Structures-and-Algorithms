#include<iostream>
#include<vector>
using namespace std;
int bsearch(vector<int> &nums, int target, int s, int e) {
    // Write your code here.
    int size= nums.size();
    if(size==0){
        return -1;
    }
    int start=s;
    int end= e;
    int mid= start+(end-start)/2;
    if(start>end)
        return -1;
    if(nums[mid]==target){
        return mid;
    }
    else if(nums[mid]>target){
        return bsearch(nums,target,start,end-1);
    }
    else{
        return bsearch(nums,target,start+1,end);
    }
}
int search(vector<int> &nums, int target) {
    int ans= bsearch(nums,target,0, nums.size()-1);
    return ans;
}
int main(){
    vector<int> sample;
    sample.push_back(2);
    sample.push_back(3);
    sample.push_back(5);
    sample.push_back(6);
    sample.push_back(8);
    cout<<search(sample, 5);
}