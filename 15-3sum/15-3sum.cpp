// Last updated: 6/27/2026, 7:30:36 PM
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        sort(nums.begin(), nums.end());

        for(int i=0; i<n; i++){
            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }

            int tar = -nums[i];
            int j=i+1, k=n-1;

            while(j<k){
                if(nums[j] + nums[k] == tar){
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++; k--;
                    while(j<k && nums[j]==nums[j-1]){
                        j++;
                    }
                }
                else if(nums[j] + nums[k] > tar){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
    return ans;
    }
};