#include<iostream>
#include<vector>
using namespace std;
int coverageOfMatrix(vector<vector<int> > &mat) {
    // Write your code here.
    int rows= mat.size();
    int cols= mat[0].size();
    int count=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(mat[i][j]==0){
                // cout<<mat[i][j];
                if((j-1>=0) && mat[i][j-1]==1){
                    count++;
                    // cout<<"1"<<count<<endl;
                }
                if((i-1>=0) && mat[i-1][j]==1){
                    count++;
                    // cout<<"2"<<count<<endl;
                }
                if((j+1<cols) && mat[i][j+1]==1){
                    count++;
                    // cout<<"3"<<count<<endl;
                }
                if((i+1<rows) && mat[i+1][j]==1){
                    count++;
                    // cout<<"4"<<count<<endl;
                }
                // cout<<"final"<<count<<endl;
            }
        }
    }
    return count;
}
int main(){
    vector <vector<int> > qus;
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(0);
    vector<int> v2;
    v2.push_back(0);
    v2.push_back(1);
    qus.push_back(v1);
    qus.push_back(v2);
    cout<<coverageOfMatrix(qus);
}