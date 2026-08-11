class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];
        int n = nums.size();
        for(int i=1; i<n; i++){
            if(nums[i] == nums[i-1]+1){
                sum += nums[i];
            }
            else{
                break;
            }
        }
        int x = sum;
        while(find(nums.begin(), nums.end(), x) != nums.end()){
            x++;
        }
        return x;
    }
};