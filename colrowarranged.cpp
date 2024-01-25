    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row= matrix.size();
        int col= matrix[0].size();
        int start=0;
        int end= col-1;
        while(start< row && end>=0){
            int element= matrix[start][end];
            if(element==target){
                return true;
            }
            if(element<target){
                start++;
            }
            else{
                end--;
            }
        }
        return false;
    }
    /*Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.
*/