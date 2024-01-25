vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row= matrix.size();
        int col= matrix[0].size();
        int count=0;
        int total= row*col;
        int srow=0,scol=0, erow= row-1, ecol= col-1;
        while(count<total){
        for(int i=scol;i<=ecol && srow<=erow;i++){
            if (i >= 0 && i < col){
            ans.push_back(matrix[srow][i]);
            count++;
            }
        }
        srow++;
        for(int j=srow;j<=erow && scol<=ecol;j++){
            ans.push_back(matrix[j][ecol]);
            count++;
        }
        ecol--;
        for(int i=ecol;i>=scol && srow<=erow;i--){
            ans.push_back(matrix[erow][i]);
            count++;
        }
        erow--;
        for(int j=erow;j>=srow && scol<=ecol;j--){
            ans.push_back(matrix[j][scol]);
            count++;
        }
        scol++;
        }
        return ans;
    }