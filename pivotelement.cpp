#include<iostream>
#include<vector>
using namespace std;
    int pivotIndex(vector<int>& nums) {
        int totalsum=0;
        int size=nums.size();
        for(int i=0;i<size;i++){
            totalsum+=nums[i];
        }
        int left=0;
        int right=0;
        for(int i=0;i<size;i++){
            right=totalsum-nums[i]-left;
            if(left==right){
                return i;
            }
            left+=nums[i];
        }
        return -1;
    }
    int main(){
        vector<int>arr;
    arr.push_back(-1);
    arr.push_back(-1);
    arr.push_back(-1);
    arr.push_back(-1);
    arr.push_back(0);
    arr.push_back(1);
    cout<<pivotIndex(arr);
    }