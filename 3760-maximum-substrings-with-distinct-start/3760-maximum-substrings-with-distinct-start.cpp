class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char> m(s.begin(), s.end());

        return m.size();
    }
};