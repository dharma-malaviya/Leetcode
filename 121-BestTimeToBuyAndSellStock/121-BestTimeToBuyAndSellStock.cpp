// Last updated: 6/27/2026, 7:30:05 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int n=prices.size();
        int bestBuy=prices[0];
        for(int i=1; i<n; i++){
            if(bestBuy<prices[i]){
                ans = max(ans, prices[i]-bestBuy);
            }
            
            bestBuy=min(bestBuy, prices[i]);
        }
        return ans;
    }

};