#include<iostream>
#include<vector>
using namespace std;
void solve(string digits, string output, int index, string mapping[], vector<string>&ans){
    if(index>=digits.length()){
        ans.push_back(output);
        return;
    }
    int num= digits[index]- '0';
    string value= mapping[num];
    for(int i=0;i<value.length();i++){
        output.push_back(value[i]);
        solve(digits, output, index+1, mapping, ans);
        output.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()==0)
            return ans;
        string output;
        int index= 0;
        string mapping [10]= {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digits, output, index, mapping, ans);
        return ans;
    } 