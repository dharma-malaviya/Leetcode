class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        vector<int> ones;
        for(int i=0; i<n; i++){
            if(s[i] == '1'){
                ones.push_back(i);
            }
        }
        int m = ones.size();
        if(m<k) return "";

        string best = "";
        int bestLen = INT_MAX;
        for(int i=0; i<m-k+1; i++){
            int start = ones[i];
            int end = ones[i+k-1];
            int len = end - start + 1;
            if(len > bestLen) continue;

            string cand = s.substr(start, len);
            if(len < bestLen || cand < best){
                bestLen = len;
                best = cand;
            }
        }
        return best;
    }
};