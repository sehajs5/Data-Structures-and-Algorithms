#include<iostream>
using namespace std;
int largestRowSum(int arr[][3]){
    int finalAns=0;
    for(int i=0;i<3;i++){
        int sum=0;
        for (int j = 0; j < 3; j++)
        {
            sum+=arr[i][j];
        }
        if(finalAns<sum){
            finalAns=sum;
        }
    }
    return finalAns;
}
int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<largestRowSum(a);
}