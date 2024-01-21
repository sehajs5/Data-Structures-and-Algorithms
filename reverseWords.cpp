#include<iostream>
using namespace std;
void revString(string s){
    int len = s.length();
    int i=0;
    while(i<len){
        while(i<len && s[i]==' '){
            i++;
        }
        int start=i;
        while(i<len && s[i]!=' '){
            i++;
        }
        int end=i-1;
        reverse(s.begin()+start,s.begin()+end+1);
    }
        for (int i = 0; i < len; i++) {
        cout << s[i];
    }
}

int main(){
    string s= "My name is Sehaj";
    revString(s);
    return 0;
}