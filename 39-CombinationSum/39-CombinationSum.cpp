// Last updated: 6/27/2026, 7:30:23 PM
class Solution {
public:
        vector<vector<int>> ans;
        vector<int> combin;
    // set<vector<int>> s;

    void getAllCombinations(vector<int>& arr, int target, int idx, vector<vector<int>> &ans, vector<int> &combin){
        if(idx == arr.size() || target < 0){
            return;
        }

        if(target == 0){
            // if(s.find(combin) == s.end()){
            // ans.push_back(combin);
            // s.insert(combin);
            // }
            ans.push_back(combin);
            return;
        }

        combin.push_back(arr[idx]);
        //single time
        // getAllCombinations(arr, target-arr[idx], idx+1, ans, combin);
        //multiple time
        getAllCombinations(arr, target-arr[idx], idx, ans, combin);

        combin.pop_back();
        //exclusion
        getAllCombinations(arr, target, idx+1, ans, combin);
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        getAllCombinations(arr, target, 0, ans, combin);
        return ans;
    }
};