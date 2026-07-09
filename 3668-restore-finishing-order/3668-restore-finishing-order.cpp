class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int n = order.size();
        vector<bool> isFriend(n+1, false);

        for(int frnd : friends){
            isFriend[frnd] = true;
        }

        vector<int> ans;

        for(int id : order){
            if(isFriend[id]){
                ans.push_back(id);
            }
        }
        return ans;
    }
};