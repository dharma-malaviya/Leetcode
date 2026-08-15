class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        bool hasNonZero = false;
        int totalXOR = 0;
        
        for(int x : nums){
            totalXOR ^= x;
            if(x != 0){
                hasNonZero = true;
            }
        }
        if(!hasNonZero) return false;

        return totalXOR != 0 ? n : n-1;
    }
};