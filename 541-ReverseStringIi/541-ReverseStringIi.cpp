// Last updated: 6/27/2026, 7:29:36 PM
class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
        
        for(int i=0; i<n; i += 2*k){
            reverse(s.begin()+i, s.begin()+min(i+k, n));
        }
        return s;
    }
};