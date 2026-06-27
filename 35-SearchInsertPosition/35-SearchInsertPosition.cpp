// Last updated: 6/27/2026, 7:30:26 PM
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st = 0;
        int end = nums.size() - 1;
        while(st <= end){
            int mid = st + (end-st)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] > target){
                end = mid - 1;
            }
            else{
                st = mid +1;
            }
        }
        return st;
    }
};