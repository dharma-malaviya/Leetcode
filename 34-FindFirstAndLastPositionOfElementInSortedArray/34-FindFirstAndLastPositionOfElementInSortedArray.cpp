// Last updated: 6/27/2026, 7:30:28 PM
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1, -1};
        int i = 0, n = nums.size();
        while(i < n){
            if(nums[i] == target){
                if(ans[0] == -1){
                    ans[0] = i;
                }
                ans[1] = i;
            }
            i++;
        }
        return ans;
    }
};