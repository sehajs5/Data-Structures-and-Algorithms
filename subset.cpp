#include<iostream>
#include<vector>
using namespace std;
    void solve(vector<int> nums, vector<int> output, int i, vector<vector<int> > &ans){
        if(i>=nums.size()){
            ans.push_back(output);
            return;
        }
        //include
        solve(nums, output, i+1, ans);
        int element= nums[i];

        //exclude
        output.push_back(element);
        solve(nums, output, i+1, ans);
    }
    vector<vector<int> > subsets(vector<int>& nums) {
        vector<vector<int> > ans;
        vector<int> output;
        int i=0;
        solve(nums, output, i, ans);
        return ans; 
    }
int main(){
    vector<int> sample;
    sample.push_back(1);
    sample.push_back(2);
    sample.push_back(3);
    sample.push_back(4);
    vector<vector<int> > ans;
    ans= subsets(sample);
}