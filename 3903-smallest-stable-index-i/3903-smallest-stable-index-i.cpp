class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            int maxE = INT_MIN, minE = INT_MAX;

            // Maximum element from 0 to i
            for(int j=0; j<=i; j++){
                maxE = max(maxE, nums[j]);
            }

             // Minimum element from i to n-1
            for(int l=i; l<n; l++){
                minE = min(minE, nums[l]);
            }
            
            if((maxE - minE) <= k){
                return i;
            }
        }
        return -1;
    }
};