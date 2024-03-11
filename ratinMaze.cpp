#include<iostream>
using namespace std;
    bool isSafe(vector<vector<int>> &m,int newx, int newy,vector<vector<int>> visited, int n){
        if((newx>=0 && newx<n) && (newy>=0 && newy<n)&& visited[newx][newy]==0 && m[newx][newy]==1){
            return true;
        }
        else{
                    return false;
        }

    }
    void solve(vector<vector<int>> &m, int x, int y, vector<string> &ans, int n, string path, vector<vector<int>> visited){
        if(x==n-1 && y==n-1){
            ans.push_back(path);
            return;
        }
        visited[x][y]=1;
        int newx, newy;
        //down
        newx=x+1;
        newy=y;
        if(isSafe(m,newx,newy,visited,n)){
            path+='D';
            solve(m,newx,newy,ans,n,path,visited);
            path.pop_back();
        }
        //left
        newx=x;
        newy=y-1;
        if(isSafe(m,newx,newy,visited,n)){
            path+='L';
            solve(m,newx,newy,ans,n,path,visited);
            path.pop_back();
        }
        //right
        newx=x;
        newy=y+1;
        if(isSafe(m,newx,newy,visited,n)){
            path+='R';
            solve(m,newx,newy,ans,n,path,visited);
            path.pop_back();
        }
        //up
        newx=x-1;
        newy=y;
        if(isSafe(m,newx,newy,visited,n)){
            path+='U';
            solve(m,newx,newy,ans,n,path,visited);
            path.pop_back();
        }
        visited[x][y]=0;
        
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        if(m[0][0]==0){
            return ans;
        }
        vector<vector<int>> visited=m;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                visited[i][j]=0;
            }
        }
        int x=0,y=0;
        string path="";
        solve(m,x,y,ans,n,path,visited);
        sort(ans.begin(),ans.end());
        return ans;
    }