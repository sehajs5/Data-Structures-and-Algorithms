#include<iostream>
using namespace std;
string replaceSpaces(string &str) {
    string ans;
    for (char c : str) {
        if (c == ' ') {
            ans += "@40";
        } else {
            ans.push_back(c);
        }
    }
    return ans;
}
int main(){
    string s="Coding Ninjas Is A Coding Platform";
    string an= replaceSpaces(s);
    cout<<an;
}