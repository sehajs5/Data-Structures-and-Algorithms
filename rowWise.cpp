#include<iostream>
using namespace std;
void input(int arr[][2]){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
}
void add(int arr[][2],int arr2[][2], int arr3[][2]){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            arr3[i][j]=arr[i][j]+arr2[i][j];
        }
    }
}
void output(int arr[][2]){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[2][2];
    cout<<"Enter elements of first 2D array";
    input(arr);
    int arr2[2][2];
    cout<<"Enter elements of first 2D array";
    input(arr2);
    int arr3[2][2];
    add(arr,arr2,arr3);
    output(arr3);
}