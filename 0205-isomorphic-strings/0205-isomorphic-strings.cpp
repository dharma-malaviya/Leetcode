class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        if(n != t.size()) return false;

        int ST[256] = {0};
        int TS[256] = {0};

        for(int i=0; i<n; i++){
            char a = s[i], b = t[i];
            if(ST[a] && ST[a] != b) return false;
            if(TS[b] && TS[b] != a) return false;

            ST[a] = b;
            TS[b] = a;
        }
        return true;
    }
};