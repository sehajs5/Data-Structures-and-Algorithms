#include<iostream>
using namespace std;
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	int res=1;
	while(n>0){
		if(n&1){
			res=1LL*(res)%m*(x)%m;
		}
	x=1LL*(x)%m*(x)%m;
	n=n>>1;
	}

	return res;
}
int main(){
    int x=3, n=2, m=1;
    cout<<modularExponentiation(x,n,m);
}