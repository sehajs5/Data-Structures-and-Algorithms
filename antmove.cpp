#include <bits/stdc++.h> 
vector<int> ninjaAnt(vector<vector<int>> &mat, int sr, int sc, int moves) 
{
	// Write code here.
	vector<int> ans;
    int rows = mat.size();
    int cols = mat[0].size();
    char direc = 'E';

    for(int i = 0; i < moves; i++) {
        if(sr<0 || sr>=rows || sc<0 || sc>=cols){
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
        else if(mat[sr][sc] == 1) {
            mat[sr][sc]=0;
            if(direc == 'E' ) {
                sr++;
                direc = 'S';
            } else if(direc == 'S' ) {
                sc--;
                direc = 'W';
            } else if(direc == 'W' ) {
                sr--;
                direc = 'N';
            } else if(direc == 'N') {
                sc++;
                direc = 'E';
            }
        } else {
            mat[sr][sc]=1;
            if(direc == 'E' ) {
                sr--;
                direc = 'N';
            } else if(direc == 'S') {
                sc++;
                direc = 'E';
            } else if(direc == 'W' ) {
                sr++;
                direc = 'S';
            } else if(direc == 'N') {
                sc--;
                direc = 'W';
            }
        }
    }
    if(sr<0 || sr>=rows || sc<0 || sc>=cols){
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }

    ans.push_back(sr);
    ans.push_back(sc);
    return ans;
}