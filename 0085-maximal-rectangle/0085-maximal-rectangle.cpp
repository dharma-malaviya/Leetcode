class Solution {
public:

    int lHist(vector<int> &heights){
        int n = heights.size();
        vector<int> nse(n), pse(n);
        stack<int> st;

        // Next Smaller Element
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            nse[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        while(!st.empty()) st.pop();

        int maxi = 0;
        for (int i = 0; i < n; i++) {
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            pse[i] = st.empty() ? -1 : st.top();
            st.push(i);

            int width = nse[i] - pse[i] - 1;
            int area = heights[i] * width;
            maxi = max(maxi, area);
        }
        return maxi;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty() || matrix[0].empty()) {
            return 0;
        }

        int n = matrix.size(), m = matrix[0].size();
        int maxArea = 0;
        // vector<int> pSum(n, vector<int>(m,0));  Wrong Initialization
        vector<vector<int>> pSum(n, vector<int>(m, 0));

        for(int j=0; j<m; j++){
            int sum = 0;
            for(int i=0; i<n; i++){
                if(matrix[i][j] == '1'){
                    sum++;
                }
                else{
                    sum = 0;
                }
                pSum[i][j] = sum;
            }
        }

        for(int i=0; i<n; i++){
            int area = lHist(pSum[i]);
            maxArea = max(maxArea, area);
        }
        return maxArea;
    }
};