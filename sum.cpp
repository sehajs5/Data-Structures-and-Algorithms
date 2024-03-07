#include<iostream>
#include<vector>
using namespace std;

int findTheLarger(int n, vector<int> &v) {
    // Write your code here.
    int sum1=0,sum2=0,s=0;
    int end= n-1;
        int mid=s+(end-s)/2;
    while(s<=end){
        if(mid-1<0||mid+1>end){
            end=n-1;
            break;
        }
        if(v[mid]>v[mid-1]&&v[mid]>v[mid+1]){
            break;
        }
        else if (v[mid]>v[mid-1]&&v[mid]<v[mid+1]){
            s=mid+1;
        }
        else if (v[mid]<v[mid-1]&&v[mid]>v[mid+1]){
            end=mid;
        }
        mid=s+(end-s)/2;
    }
    cout<<"Mid: "<<mid<<endl;
    for(int i=0;i<=mid;i++){
                sum1+=v[i];
            }
            cout<<"SUM1: "<<sum1<<endl;

    for(int i=mid;i<=end;i++){
        cout<<v[i]<<"\t";
                sum2+=v[i];
    }
                cout<<"SUM2: "<<sum2<<endl;
    if(sum1>sum2){
        return 0;
    }
    else if (sum1<sum2){
        return 1;
    }
    else{
        return -1;
    }
}
int main(){
    vector<int> sample;
    sample.push_back(9);
    sample.push_back(10);
    sample.push_back(5);
    sample.push_back(3);
    sample.push_back(1);
    // sample.push_back(6);
    int a= findTheLarger(5,sample);
    cout<<a;
}