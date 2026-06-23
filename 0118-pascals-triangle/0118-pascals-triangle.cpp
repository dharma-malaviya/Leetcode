class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> triangle;

        for(int i=0; i<n; i++){
            vector<int> row(i+1, 1);
            for(int j=1; j<i; j++){
                row[j] = triangle[i-1][j-1] + triangle[i-1][j];
            }
            triangle.push_back(row);
        }
    return triangle;
    }
};

// Time Complexity: O(N^2), we generate all the elements in first N rows sequentially one by one.
// Space Complexity: O(N^2), additional space used for storing the entire pascal triangle.
