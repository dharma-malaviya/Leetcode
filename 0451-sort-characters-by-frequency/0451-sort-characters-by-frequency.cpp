class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char, int> m;
        for(int i=0; i<n; i++){
            m[s[i]]++;
        }

        vector<pair<char, int>> v(m.begin(), m.end());
        sort(v.begin(), v.end(), [](auto &a, auto&b){
            return a.second > b.second;
        });

        string ans;
        for(auto p : v){
            ans.append(p.second, p.first);
        }
        return ans;
    }
};