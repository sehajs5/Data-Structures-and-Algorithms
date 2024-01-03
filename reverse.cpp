#include<iostream>
#include<math.h>
using namespace std;
int reverse(int x) {
        int ans=0,i,a,mul=0,length,finall,count=0;
        length=x;
        while(length!=0){
            length=length/10;
            count++;
        }
        cout<<count<<endl;
        finall=pow(10,(count-1));
        cout<<finall<<endl;
        while(x!=0){
            a=x%10;
            a=a*finall;
            ans+=a;
            finall=finall/10;
            x=x/10;
        }
        return ans;
    }

    int main(){
        int f=321;
        cout<<reverse(f);
    }