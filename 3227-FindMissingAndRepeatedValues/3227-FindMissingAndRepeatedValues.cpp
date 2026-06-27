// Last updated: 6/27/2026, 7:29:16 PM
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        int m=grid.size();
        int n=grid[0].size();
        unordered_set<int>s;
        int a=0, b=0;
        int actSum=0, expSum=0;

        expSum = ((n*n)*(n*n+1)) / 2;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
            actSum += grid[i][j];
            int first = grid[i][j];
                if(s.find(grid[i][j]) != s.end()) {  
                    a = grid[i][j];
                    ans.push_back(a);
                }
                s.insert(grid[i][j]);            
            }
        }
    b = expSum + a - actSum;
    ans.push_back(b);
    return ans;
    }
};