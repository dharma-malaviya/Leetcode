// Last updated: 6/27/2026, 7:29:38 PM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int ans;

        for(int i=0; i<n; i++){
            if(nums[i] == 1){
                count++;
            }
            else{
                count = 0;
            }
            ans = max(ans, count);
        }
        return ans;
    }
};