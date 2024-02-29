#include<iostream>
using namespace std;
int partition(int *arr, int s, int e){
    int count=0;
    int pivot=arr[s];
    cout<<"Pivot Value"<<pivot<<endl;
    for(int i=s+1;i<=e;i++){
        if(pivot>=arr[i]){
            count++;
        }
    }
    int pivotIndex= count+s;
    cout<<"Pivot Index: "<<pivotIndex<<endl;
    swap(arr[count+s],arr[s]);
    int i=s;
    int j=e;
    while(i<=count+s && j>=count+s){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<=count+s && j>=count+s)
        swap(arr[i++],arr[j--]);

    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return count+s;
}
void quickSort(int *arr, int s,int e){
    if(s>=e){
        return;
    }
    int p = partition(arr,s,e);
    cout<<p<<endl;
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}
int main(){
    int arr[5]={5,2,4,65,1};
    quickSort(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}