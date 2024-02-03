#include<iostream>
using namespace std;
int forProduct(int n){
	int product=1;
	while(n!=0){
		int rem= n%10;
		product*=rem;
		n/=10;
	}
	return product;
}
int forSum(int n){
	int sum=0;
	while(n!=0){
		int rem= n%10;
		sum+=rem;
		n/=10;
	}
	return sum;
}
int findProductSumDifference(int n){
	// Write your code here
	int pro= forProduct(n);
	int s= forSum(n);
	return pro-s;
}

int main(){
    int a= 234;
    cout<<findProductSumDifference(a);
}