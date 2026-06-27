// Last updated: 6/27/2026, 7:29:18 PM
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int k = 1, l = 1;
        vector<int> ans(n);
        for(int i=0; i<n; i++){
            if(nums[i] < 0){
                ans[(2*k)-1] = nums[i];
                k++;
            }
            else{
                ans[2*(l-1)] = nums[i];
                l++;
            }
    }
        return ans;
    }
};