#include<iostream>
#include<vector>
using namespace std;
bool matrixGame(vector<vector<int> > &mat)
{
    // Write your code here
    int rows= mat.size();
    int cols= mat[0].size();
    vector<vector<int> > mul(rows, vector<int>(cols,0));
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            for(int k=0;k<rows;k++){
                mul[i][j]+=mat[i][k]*mat[k][j];
                }
                if(mul[i][j]!=mat[i][j]){
                    return false;
            }
        }
    }
    return true;
}
int main(){
    vector<vector<int> > mat;
    vector<int>m1;
    m1.push_back(1);
    m1.push_back(1);
    mat.push_back(m1);
    vector<int> m2;
    m2.push_back(1);
    m2.push_back(1);
    mat.push_back(m2);
    bool ans= matrixGame(mat);
    cout<<ans;
}
