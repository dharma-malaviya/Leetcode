class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int m = nums2.size();
        unordered_map<int, int> nge;
        for(int i=0; i<m; i++){
            nge[nums2[i]] = -1;
            for(int j=i+1; j<m; j++){
                if(nums2[j] > nums2[i]){
                    nge[nums2[i]] = nums2[j];
                    break;
                }
            }
        }
        vector<int> ans;
        for(int x : nums1){
            ans.push_back(nge[x]);
        }
        return ans;
    }
};