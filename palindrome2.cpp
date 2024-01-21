#include<iostream>
using namespace std;
bool validChar(char ch) {
        if(isalnum(ch)){
            return 1;
        }
        return 0;
    }

    bool isPalindrome(string s) {
        string ansStr="";
        for (int i = 0; i < s.length(); i++) {
            if (validChar(s[i])) {
                s[i]=tolower(s[i]);
                ansStr.push_back(s[i]);
            }
        }
        int size= ansStr.length();
        // for(int i=0;i<size;i++){
        //     cout<<ansStr[i];
        // }
        // cout<<endl;
        int len=size-1;
        for(int i=0;i<=size/2;i++){
        if(ansStr[i]!=ansStr[len-i]){
            return false;
        }
    }
        return true;
    }
int main(){
    string s ="A man, a plan, a canal: Panama";
    bool ans= isPalindrome(s);
    cout<<endl<<ans;
}