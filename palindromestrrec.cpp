#include<iostream>
#include<string>
using namespace std;
void reverse(string &s, int i, int j){
    if(i>j){
        return ;
    }
    swap(s[i],s[j-1]);
    i++;
    j--;
    reverse(s, i, j);
}
bool checkPalindrome(string s, int i, int j){
    string a= s;
    reverse(a,i,j);
    return (a==s);
}
int main(){
    string s= "abcbaa";
    cout<<checkPalindrome(s,0,s.size());
}