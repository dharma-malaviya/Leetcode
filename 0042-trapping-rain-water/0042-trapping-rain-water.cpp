class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int water = 0;
        vector<int> rMax(n);
        rMax[n-1] = height[n-1];
        for(int i=n-2; i>=0; i--){
            rMax[i] = max(rMax[i+1], height[i]);
        }

        int lMax= height[0];
        for(int i=0; i<n; i++){
            lMax= max(lMax, height[i]);
            water += min(lMax, rMax[i]) - height[i];
        }
        return water;
    }
};