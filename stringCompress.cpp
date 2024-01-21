#include<iostream>
#include<vector>
using namespace std;
int compress(vector<char>& chars) {
        string strt;
        int i=0;
        while(i<chars.size()){
            int count=1;
            char s= chars[i];
            int j=i+1;
            while(j<chars.size()){
            if(chars[j]==s){
                j++;
                count++;
            }
            else{
                break;
            }
            }
            i=j;
            strt.push_back(s);
            if(count>1){
                strt+=to_string(count);
            }
        }
        chars.assign(strt.begin(), strt.end());
        return strt.length();
    }
    int main(){
        vector <char> sample;
    sample.push_back('a');
    sample.push_back('a');
    sample.push_back('b');
    sample.push_back('b');
    sample.push_back('c');
    sample.push_back('c');
    sample.push_back('c');
        int ans= compress(sample); 
        cout<<ans;
    }