#include<iostream>
using namespace std;
int lenString(char str[]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
            count++;
    }
    return count;
}
int main(){
    char ch[10];
    cout<<"Enter your String"<<endl;
    cin>>ch;
    int length= lenString(ch);
    cout<<"Length of the String is: "<<length;
}