#include<iostream>
#include<vector>
using namespace std;
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1;
        int k=m+n-1;
        while(i>=0&&j>=0){
            if(nums1[i]>nums2[j]){
                nums1[k--]=nums1[i--];
            }
            else{
                nums1[k--]=nums2[j--];
            }
        }
        while(j>=0){
                nums1[k--]=nums2[j--];
            }
        }
        void print(vector<int>& arr, int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}
        // int main(){
        //     vector<int> nums1;
        //     vector<int> nums2;
        //     nums1.push_back(1);
        //     nums1.push_back(2);
        //     nums1.push_back(3);
        //     nums1.push_back(0);
        //     nums1.push_back(0);
        //     nums1.push_back(0);
        //     nums2.push_back(2);
        //     nums2.push_back(5);
        //     nums2.push_back(6);
        //     merge(nums1,6,nums2,3);
        //     print(nums1,6);
        // }