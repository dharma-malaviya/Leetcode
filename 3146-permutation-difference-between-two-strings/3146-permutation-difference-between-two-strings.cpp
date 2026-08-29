class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int pos[26];
        for(int j=0; j<t.size(); j++){
            pos[t[j] - 'a'] = j;
        }

        int diff = 0;

        for(int i=0; i<s.size(); i++){
            diff += abs(i - pos[s[i] - 'a']);
        }
        return diff;
    }
};