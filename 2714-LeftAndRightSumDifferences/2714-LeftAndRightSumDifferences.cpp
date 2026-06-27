// Last updated: 6/27/2026, 7:29:19 PM
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int total=0;

        for(int x : nums){
            total += x;
        }

        int lSum=0;
        
        for(int i=0; i<n; i++){            
            total -= nums[i];   //Right sum
            
            int diff = abs(lSum-total);
            ans.push_back(diff);

            lSum += nums[i];
        }
        return ans;
    }
};