#include<iostream>
using namespace std;
char maxChar(string s){
    int len= s.length();
    int count=0,lc=0;
    char ans=s[0];
    for(int i=0;i<len;i++){
        int temp=s[i];
        lc=0;
        for(int j=0;j<len;j++){
            if(s[j]==s[i]){
                lc++;
            }
            if(lc > count || (lc == count && s[i] < ans)){
                ans=s[i];
                count=lc;
            }
        }
    }
    return ans;
}
int main(){
    string s="output";
    char ans= maxChar(s);
    cout<<ans;
    return 0;
}