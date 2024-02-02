#include<iostream>
using namespace std;
void print(int *p){
    cout<<"Value : "<<*p<<endl;
    cout<<"Address: "<<p<<endl;
}
void update(int *p){
    *p = *p+1;
}
int sumArr(int *arr, int size){
    int i=0,sum=0;
    cout<<"Size of pointer"<<sizeof(arr)<<endl;
    for(i;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int a=5;
    int *p= &a;
    update(p);
    print(p);

    int arr[5]={1,2,3,5,6};
    cout<<"Sum of arr: "<<sumArr(arr,5);
}