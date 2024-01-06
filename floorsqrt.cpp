#include<iostream>
using namespace std;
long long int floorsqrt(int n){
    int s=0;
    int e=n;
    long long int mid= s+(e-s)/2;
    long long int ans;
    while(s<=e){
        long long int square= mid*mid;
        if(square==n){
            return mid;
        }
        if(square>n){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
double decimalPart(int n, int prec, int intSol){
    double factor= 1;
    double ans=intSol;
    for(int i=0;i<prec;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
        }
        return ans;
}
int main(){
    int sol1=floorsqrt(37);
    double sol2=decimalPart(37,3,sol1);
    cout<<sol2;
    
}