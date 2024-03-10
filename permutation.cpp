#include<iostream>
#include<vector>
using namespace std;
    void solve(vector<int> nums, vector<vector<int> > &result,  int s, int n){
        if(s>=n){
            result.push_back(nums);
            return;
        }
        for(int i=s;i<n;i++){
            swap(nums[i],nums[s]);
            solve(nums, result, s+1, n);
            swap(nums[i],nums[s]);
        }
    }
    vector<vector<int> > permute(vector<int>& nums) {
        vector<vector<int> > result;
        int n= nums.size();
        int s=0;
        solve(nums, result, s,n);
        return result; 
    }
    int main(){
        vector<int> nums;
        nums.push_back(1);
        nums.push_back(2);
        nums.push_back(3);
        vector<vector<int> > ans;
        ans= permute(nums);
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans.size();j++){
                cout<<ans[i][j];
            }
        }
    }