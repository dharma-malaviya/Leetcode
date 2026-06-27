// Last updated: 6/27/2026, 7:30:16 PM
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) {
        int n = inter.size();
        sort(inter.begin(), inter.end());
        vector<vector<int>> ans;
        ans.push_back(inter[0]);
        for(int i = 1; i<n; i++){
           if(inter[i][0]  <= ans.back()[1]){
            ans.back()[1] = max(ans.back()[1], inter[i][1]);
           }
           else{
            ans.push_back(inter[i]);
           }
        }        
        return ans;
    }
};