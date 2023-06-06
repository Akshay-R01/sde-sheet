class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size(), col = matrix[0].size();
        int left = 0, right = row * col - 1;
        while(left <= right)
        {
            int mid = left + (right-left)/2;
            //getting modified row and col values
            int modRow = mid/col, modCol = mid%col;
            int midVal = matrix[modRow][modCol];
            if(midVal == target)
                return true;
            else if(midVal > target)
                right = mid-1;
            else
                left = mid+1;
        }
        return false;
    }
};