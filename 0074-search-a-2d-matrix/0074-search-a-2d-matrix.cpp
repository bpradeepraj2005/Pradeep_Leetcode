class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int row=0; row<matrix.size(); row++){
            for (int col=0; col<matrix[row].size(); col++){
                if(target == matrix[row][col]){
                    return true;
                }
            }
        }
        return false;
    }
};