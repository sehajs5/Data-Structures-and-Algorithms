#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the number of rows";
    cin>>m;
    cout<<"Enter the number of cols";
    cin>>n;
    int **arr= new int* [m];
    for(int i=0; i< m; i++){
        arr[i]= new int [m];
    }
    cout<<"Enter the values";
    for(int i=0; i< m; i++){
        for(int j=0; j< m; j++){
            cin>>arr[i][j];
    }}
    for(int i=0; i< m; i++){
        for(int j=0; j< m; j++){
            cout<<arr[i][j]<<" ";
    }cout<<endl;
    }

    //deleteing memory
    for(int i=0; i< m; i++){
        delete []arr[i];
    }
    delete []arr;
    cout<<"Memory released as well";
}