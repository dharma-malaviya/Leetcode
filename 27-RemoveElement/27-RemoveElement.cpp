// Last updated: 6/27/2026, 7:30:32 PM
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int i=0;
        int k = 0;

        for(int i=0; i<n; i++){
            if(nums[i] != val){
                nums[k] = nums[i];
                k++;
            }
        }
       return k;        
    }
};