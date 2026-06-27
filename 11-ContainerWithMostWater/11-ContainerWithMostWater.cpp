// Last updated: 6/27/2026, 7:30:39 PM
class Solution {
public:
    int maxArea(vector<int>& height) {
       int maxWater = 0;
        int w=0, ht=0;
        int n = height.size();
        int lp=0, rp=n-1;

        while(lp<rp){
            w = rp-lp;
            ht = min(height[lp], height[rp]);
            int area = w*ht;
            maxWater = max(maxWater, area);

            height[lp]<height[rp] ? lp++ : rp--;
        } 
        return maxWater;
    }
};