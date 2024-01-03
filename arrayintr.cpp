#include<iostream>
#include<vector>
using namespace std;
vector<int> arrayinter(vector<int> &arr1, vector<int> &arr2){
    vector<int>inter;
    int ans;
    for(int i=0;i<arr1.size();i++){
        for(int j=0;j<arr2.size();j++){
            // if(arr1[i]<arr2[j]){
            //     break;
            // }
            // else if(arr1[i]==arr2[j]){
            //     inter.push_back(arr1[i]);
            // }
            // else{
            //     continue;
            // }
            if((arr1[i]^arr2[j])==0){
                inter.push_back(arr1[i]);
                break;
            }
        }
        // inter.push_back(ans);
    }
    return inter;
}
int main(){
    vector<int> sample;
    sample.push_back(1);
    sample.push_back(2);
    sample.push_back(3);
    sample.push_back(4);
    sample.push_back(5);
    vector<int> sample1;
    sample1.push_back(2);
    sample1.push_back(4);
    sample1.push_back(6);
    sample1.push_back(8);
    sample1.push_back(10);
    vector<int> ans= arrayinter(sample, sample1);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}