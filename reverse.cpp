#include<iostream>
using namespace std;
int lenString(char str[]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
            count++;
    }
    return count;
}
void reverse(char ch[],int size){
    int s=size-1;
    for(int i=0;i<=s/2;i++){
        swap(ch[i],ch[s-i]);
    }
    for(int i=0;i<size;i++){
        cout<<ch[i];
    }
}
int main(){
    char str[10];
    cout<<"Enter your String"<<endl;
    cin>>str;
    int length= lenString(str);
    reverse(str, length);
}