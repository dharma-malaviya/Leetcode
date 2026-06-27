// Last updated: 6/27/2026, 7:29:41 PM
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int n1 = nums1.size();
        int n2 = nums2.size();

        vector<int> ans;

        for(int i=0; i<n1; i++){
            if(i > 0 && nums1[i] == nums1[i-1]) {
                continue;
            }

            for(int j=0; j<n2; j++){
                if(nums1[i] == nums2[j]){
                    ans.push_back(nums1[i]);
                    break;
                }
            }
        }
        return ans;
    }
};