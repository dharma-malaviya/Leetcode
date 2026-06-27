// Last updated: 6/27/2026, 7:30:13 PM
class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<bool> rmark(m, false);
        vector<bool> cmark(m, false);

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(mat[i][j] == 0){
                    rmark[i] = true;
                    cmark[j] = true;
                }
            }
        }

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(rmark[i] || cmark[j]){
                    mat[i][j] = 0;
                }
            }
        }
    }
};