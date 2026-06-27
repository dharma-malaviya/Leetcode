// Last updated: 6/27/2026, 7:30:11 PM
class Solution {
public:

    bool searchInRow(vector<vector<int>> &matrix, int target, int row){
        int n = matrix[0].size();
        int st=0, end=n-1;

        while(st <= end){
            int mid = st+(end-st)/2;

            if(matrix[row][mid] == target){
                return true;
            }
            else if(matrix[row][mid] >= target){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int SR=0, ER=m-1;

        while(SR <= ER){
            int MR = SR+(ER-SR)/2;

            if(matrix[MR][0] <= target && target <= matrix[MR][n-1]){
                return searchInRow(matrix, target, MR);
            }
            else if(target <= matrix[MR][0]){
                ER = MR-1;
            }
            else{
                SR = MR+1;
            }
        }
      return false;  
    }
};