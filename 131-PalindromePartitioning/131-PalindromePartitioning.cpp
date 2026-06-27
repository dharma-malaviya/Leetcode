// Last updated: 6/27/2026, 7:30:02 PM
class Solution {
public:

    bool isPalin(string s){
        string s2 = s;
        reverse(s2.begin(), s2.end());
        return s == s2;
    }

    void getAllPartitions(string s, vector<string> &partition, vector<vector<string>> &ans){
        int n = s.size();
        if(s.size() == 0){
            ans.push_back(partition);
            return;
        }

        for(int i=0; i<n; i++){
            string part = s.substr(0, i+1);

            if(isPalin(part)){
                partition.push_back(part);
                getAllPartitions(s.substr(i+1), partition,ans);
                partition.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> partition;
        getAllPartitions(s, partition, ans);
        return ans;
    }
};