class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        if(n != t.size()) return false;

        for(int i=0; i<n; i++){
            for(int j=0; j<t.size(); j++){
                if((s[i] == s[j]) != (t[i] == t[j])){
                    return false;
                }
            }
        }
        return true;
    }
};