// Last updated: 6/27/2026, 7:29:44 PM
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int, int> m;
        for(int i=0; i<n; i++){
            int first = nums[i];
            if(m.find(nums[i]) != m.end()){
                return nums[i];
                break;
            }
            m[first]=i;
        }
        return false;
    }
};