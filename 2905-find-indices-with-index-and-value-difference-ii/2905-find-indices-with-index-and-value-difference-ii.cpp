class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        int n = nums.size();
        int minIdx = 0, maxIdx = 0;

        for(int j=indexDifference; j<n; j++){
            int i = j - indexDifference;

            if(nums[i] < nums[minIdx]) minIdx = i;
            if(nums[i] > nums[maxIdx]) maxIdx = i;

            if(nums[j] - nums[minIdx] >= valueDifference) return {minIdx, j};
            if(nums[maxIdx] - nums[j] >= valueDifference) return {maxIdx, j};
        }
        return {-1, -1};
    }
};