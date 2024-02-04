#include<iostream>
using namespace std;
long long int countOf3(int x) {
     // Write your code here.
     int count=0;
     for(int i=0;i<=x;i++){
          string buffer= to_string(i);
          for(char every: buffer){
               if(every=='3') count++;
          }
     }
     return count;
}
int main(){
    int sample;
    cout<<"Enter the sample value";
    cin>>sample;
    cout<<"No of 3s in sample: "<<countOf3(sample);
}
