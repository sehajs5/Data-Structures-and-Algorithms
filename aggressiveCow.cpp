#include<iostream>
#include<vector>
using namespace std;
bool isPossible(vector<int> &stalls, int k,int n, int mid){
    int cowCount=1;
    int lastPos=stalls[0];
    for(int i=0;i<n;i++){
        if(stalls[i]-lastPos>=mid){
            cowCount++;
            if(cowCount==k){
                return true;
            }
            lastPos=stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int s=0;
    int maxi=-1;
    int size= stalls.size();
    int e=stalls[size-1];
    int mid= s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(isPossible(stalls,k,size, mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
    int main(){
    vector<int>arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(9);
    arr.push_back(7);
    cout<<aggressiveCows(arr,4);
}
