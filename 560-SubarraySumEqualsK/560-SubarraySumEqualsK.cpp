// Last updated: 6/27/2026, 7:29:35 PM
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixCount;
        prefixCount[0] = 1;   // empty prefix
        int sum = 0, count = 0;

        for (int num : nums) {
            sum += num;
            if (prefixCount.count(sum - k)) {
                count += prefixCount[sum - k];
            }
            prefixCount[sum]++;
        }
        return count;
    }
};