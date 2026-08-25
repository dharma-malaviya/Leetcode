class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
       int n = nums.size();
       int m = 1;
       sort(nums.begin(), nums.end());

       for(int i=0; i<n; i++){
        if(nums[i] == k*m){
            m++;
        }
       } 
       return k*m;
    }
};