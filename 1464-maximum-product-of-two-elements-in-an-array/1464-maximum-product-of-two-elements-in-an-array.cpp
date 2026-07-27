class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxSum = 0;
        int sum = 0;
        for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size(); j++){
                sum = ((nums[i]-1) * (nums[j]-1));
                maxSum = max(maxSum, sum);
            }
        }
        return maxSum;
    }
};