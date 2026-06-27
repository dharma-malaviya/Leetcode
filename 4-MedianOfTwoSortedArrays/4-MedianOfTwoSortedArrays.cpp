// Last updated: 6/27/2026, 7:30:45 PM
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();
        int i=0, j = 0;
        vector<int> merged;
        while(i < m && j < n){
            if(nums1[i] <= nums2[j]){
                merged.push_back(nums1[i]);
                i++;
            }
            else{
                merged.push_back(nums2[j]);
                j++;
            }
        }

        while(i < m){
            merged.push_back(nums1[i]);
            i++;
        }
        while(j < n){
            merged.push_back(nums2[j]);
            j++;
        }

        int s = merged.size();
        if((s % 2) == 0){
            double ans = (merged[s/2] + merged[(s/2)-1]) / (double)2;
            return ans;
        }
        else{
            double ans = merged[s/2];
            return ans;
        }

    }
};