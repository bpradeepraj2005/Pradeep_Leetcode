class Solution {
public:
    bool bs(vector<vector<int>>&matrix, int low, int st, int ed, int target){
        
        if(matrix[low][st]<=target && target<=matrix[low][ed]){
            int mid=st+(ed-st)/2;

            if(matrix[low][mid]== target) return true;

            else if(matrix[low][mid]>target){
                return bs(matrix, low, st, mid-1, target);
            }
            else{
               return bs(matrix, low, mid+1, ed, target);
            }
        }
        return false;

    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0; i<matrix.size(); i++){
            int low=i, st, ed;
            // int high=matrix.size()-1;
            
            if(true == bs(matrix, low, st=0, ed=matrix[i].size()-1, target))
                return true;
        }

        return false;

    }
};