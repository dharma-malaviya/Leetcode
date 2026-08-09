class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int result = nums[0]+nums[1]+nums[2];
        int n = nums.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                for(int k=j+1; k<n; k++){
                    int sum = nums[i]+nums[j]+nums[k];
                    if(abs(sum-target) < abs(result-target)){
                        result = sum;
                    }
                }
            }
        }
        return result;
    }
};