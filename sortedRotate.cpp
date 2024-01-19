#include<iostream>
#include<vector>
using namespace std;
        bool check(vector<int>& nums) {
        int count=0;
        int n= nums.size();
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                count++;
            }
        }
        if(nums[0]<nums[n-1]){
                count++;
            }
        // cout<<count;
        if(count<=1){
            return true;
        }
        else{
            return false;
        }
        }
        
    int main(){
        vector<int>sample;
        sample.push_back(1);
        sample.push_back(2);
        sample.push_back(3);
        // sample.push_back(1);
        cout<<check(sample);
    }