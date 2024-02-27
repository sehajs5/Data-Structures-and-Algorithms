#include<iostream>
#include<string>
using namespace std;
void reverse(string &str, int i, int j){
	if(i>j){
		return;
	}
	swap(str[i],str[j]);
	i++;
	j--;
	reverse(str, i, j);
}
string reverseString(string &str)
{
	// Write your code here.
	int i=0;
	int j= str.size()-1;
	reverse(str, i,j);
	return str;
}
int main(){
    string s= "absde";
    reverseString(s);
    cout<<s;
}
