#include<iostream>
using namespace std;
string convertString(string s){
    string cleanedStr;
    for(char c:s){
        if(isalnum(c)){
            cleanedStr+=tolower(c);
        }
    }
    cout<<cleanedStr<<endl;
    return cleanedStr;
}
bool checkPalindrome(string s)
{
    // Write your code here.
    string ansStr=convertString(s);
    int size=ansStr.length()-1;
    cout<<size<<endl;
    for(int i=0;i<=size/2;i++){
        if(ansStr[i]!=ansStr[size-i]){
            return false;
        }
    }
    return true;

}
int main(){
    string s = "c1 O$d@eeD o1c";
    bool ans= checkPalindrome(s);
    cout<<ans;
}