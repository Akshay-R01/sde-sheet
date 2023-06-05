class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col = matrix[0][0];
        int rows = matrix.size(), cols = matrix[0].size();
        //marking all first row and col according to zeroes in the grid
        for(int i=0; i<rows; i++) {
            for(int j=0; j<cols; j++) {
                if(matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    (j == 0) ? col = 0 : matrix[0][j] = 0;
                }
            }
        }
        //updating the matrix except the first row and col
        for(int i=1; i<rows; i++) {
            for(int j=1; j<cols; j++) {
                if(matrix[i][0] == 0 || matrix[0][j] == 0) 
                    matrix[i][j] = 0;
            }
        }
        //update the row 
        if(matrix[0][0] == 0) {
            for(int i=0; i<cols; i++) {
                matrix[0][i] = 0;
            }
        }
        //update the col
        if(col == 0) {
            for(int i=0; i<rows; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};