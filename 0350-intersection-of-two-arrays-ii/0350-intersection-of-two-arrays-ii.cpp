class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> freq;
        for(int n : nums1){
            freq[n]++;
        }

        vector<int> result;
        for(int num: nums2){
            auto it = freq.find(num);
            if(it != freq.end() && it->second > 0){
                result.push_back(num);
                it->second--;
            }
        }
        return result;
    }
};