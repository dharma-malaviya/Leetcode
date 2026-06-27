// Last updated: 6/27/2026, 7:30:01 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        int n = nums.size();

        for(int i=0; i<n; i++){
            ans ^= nums[i];
        }
        return ans;
    }
};