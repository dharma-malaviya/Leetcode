// Last updated: 6/27/2026, 7:29:49 PM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int count=0;
        for(int i=0; i<n; i++){
            if(count==nums[i]){
                count++;
            }
            else{
                break;
            }
        }
        return count;
    }
};