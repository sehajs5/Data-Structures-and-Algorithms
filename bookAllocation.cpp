#include<iostream>
using namespace std;
bool isPossible(int arr[],int n, int m, int mid){
    int sum=0;
    int student=1;
    int i=0;
    for(i=0;i<n;i++){
        if(sum+arr[i]<=mid){
            sum+=arr[i];
        }
        else{
            student++;
            if((student>m||arr[i]>mid)){
                return false;
            }
            sum=arr[i];
        }
        
    }
    return true;
    }
    

int bookAllocation(int arr[], int n, int m){
    int s= 0;
    int all=0;
    for(int j=0;j<n;j++){
        all+=arr[j];
    }
    int e= all;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
        }
        return ans;
    }
    int main(){
    int arr[6]={0,3,4,7,10,9};
    // int size=sizeof(arr)/sizeof(int);
    cout<<bookAllocation(arr,6,4);
}
