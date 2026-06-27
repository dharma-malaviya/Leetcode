// Last updated: 6/27/2026, 7:29:21 PM
class Solution {
public:
    bool checkValidGrid(vector<vector<int>>& grid) {
        int n = grid.size();

        if(grid[0][0] != 0) return false;

        vector<pair<int, int>> pos(n*n);
        for(int r=0; r<n; r++){
            for(int c=0; c<n; c++){
                pos[grid[r][c]] = {r, c};
            }
        }

        for(int k=1; k<n*n; k++){
            auto [r1, c1] = pos[k-1];
            auto [r2, c2] = pos[k];
            int diffR = abs(r1 - r2);
            int diffC = abs(c1 - c2);

            if(!((diffR == 1 && diffC == 2) || (diffR == 2 && diffC == 1))){
                return false;
            }
        }
        return true;
    }
};