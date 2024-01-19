#include<iostream>
#include<vector>
using namespace std;
int makeNum(vector<int>&nums,int size){
	int val=0;
    int j=0;
	for(int i=size-1;i>=0;i--){
        // cout<<nums[j]<<endl;
		val+=pow(10,i)*nums[j];
        j++;
	}
    // cout<<"Int Value: "<<val<<endl;
	return val;
}
vector<int> makeVector(int num){
	vector<int> ans;
	while(num>0){
		int rem= num%10;
		num/=10;
		ans.push_back(rem);
	}
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<",";
    // }
    // cout<<endl;
	return ans;
}
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
	int val1=makeNum(a,n);
	int val2=makeNum(b,m);
	int ans= val1+val2;
	vector<int>final= makeVector(ans);
	return final;
	
}

int main(){
    vector<int> a;
    a.push_back(4);
    a.push_back(5);
    a.push_back(1);
    vector<int> b;
    b.push_back(3);
    b.push_back(4);
    b.push_back(5);
    vector <int> ans= findArraySum(a,a.size(),b,b.size());
    reverse(ans.begin(),ans.end());
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<",";
    // }
}