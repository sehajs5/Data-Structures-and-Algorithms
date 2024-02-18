#include<iostream>
#include<vector>
using namespace std;
long minCost (int numProjects, vector <int> &projectId, int *bid){
    int i=0;
    int size=projectId.size();
    int val=0;
    for(i=0;i<numProjects;i++){
        val=0;
        for(int j=0;j<size;j++){
            if(projectId[j]==i){
            val=1;
            break;
            }
        }
        if(val==0){
            return -1;
        }
    }
    int result=0,count=0;
    int min=0;
        for(int j=0;j<size;j++){
            vector <int> minarr;
            for(int k=0;k<size;k++){
                if(projectId[k]==projectId[j]){
                    minarr.push_back(k);
                }
            }
            for(int l=0;l<minarr.size();l++){
                cout<<minarr[l]<<" ";
            }cout<<endl;
            min=INT16_MAX;
            for(int l=0;l<minarr.size();l++){
                int f= minarr[l];
                if(bid[f]<min) min=bid[f];
            }
            cout<<min<<endl;
            result+=min;
            count++;
            if(count>numProjects) break;
    }
    
    return result;
}
int main(){
    int numProjects=2;
    vector<int> projectId;
    // projectId.push_back(2);
    // projectId.push_back(0);
    projectId.push_back(1);
    // projectId.push_back(2);
    projectId.push_back(1);
    int bid[4]={4,7};
    cout<<minCost(numProjects,projectId,bid);
}