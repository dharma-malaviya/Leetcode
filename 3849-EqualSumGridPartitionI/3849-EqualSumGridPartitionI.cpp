// Last updated: 6/27/2026, 7:29:15 PM
class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        long long total_sum = 0;

        vector<long long> row_sums(m, 0);
        vector<long long> col_sums(n, 0);

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                row_sums[i] += grid[i][j];
                col_sums[j] += grid[i][j];
                total_sum += grid[i][j];
            }
        }

        if (total_sum % 2 != 0) {
            return false;
        }

        long long target = total_sum / 2;

        long long current_sum = 0;
        for (int i = 0; i < m - 1; ++i) {
            current_sum += row_sums[i];
            if (current_sum == target) {
                return true;
            }
        }

        current_sum = 0;
        for (int j = 0; j < n - 1; ++j) {
            current_sum += col_sums[j];
            if (current_sum == target) {
                return true;
            }
        }
    

        return false;
    }
};