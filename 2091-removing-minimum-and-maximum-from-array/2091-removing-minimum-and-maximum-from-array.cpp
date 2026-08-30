class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minVal = INT_MAX, maxVal = INT_MIN;
        int minIdx = 0, maxIdx = 0;
        int ans = 0;

        for(int i=0; i<n; i++){
            if(nums[i] < minVal){
                minVal = nums[i];
                minIdx = i;
            }
            if(nums[i] > maxVal){
                maxVal = nums[i];
                maxIdx = i;
            }
        }

        // Make minIdx the smaller index
        if(minIdx > maxIdx){
            swap(minIdx, maxIdx);
        }

        // 1. Remove both from left
        int left = maxIdx+1;

        // 2. Remove both from right
        int right = n - minIdx;

        // 3. Remove min from left and max from right
        int both = (minIdx+1) + (n - maxIdx);

        return min({left, right, both});
    }
};