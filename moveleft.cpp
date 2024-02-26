#include<iostream>
#include<vector>
using namespace std;
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    int i=0, temp;
    temp= arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    return arr;
}
int main(){
    vector<int> sample;
    sample.push_back(2);
    sample.push_back(3);
    sample.push_back(5);
    sample.push_back(6);
    sample.push_back(8);
    rotateArray(sample,sample.size());
    for(int i=0;i<sample.size();i++){
        cout<<sample[i]<<" ";
    }

}