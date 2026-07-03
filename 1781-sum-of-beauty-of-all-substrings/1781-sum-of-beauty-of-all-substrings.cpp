class Solution {
public:
    int beautySum(string s) {
        int ans = 0;
        int n = s.size();

        for(int i=0; i<n; i++){
            unordered_map<char, int> feqMap;
            feqMap[s[i]] = 1;
            for(int j=i+1; j<n; j++){
                feqMap[s[j]]++;
                int max = INT_MIN, min = INT_MAX;
            for(auto pair : feqMap){
                int frequency  = pair.second;
                if(frequency > max) max = pair.second;
                if(frequency < min) min = pair.second;
            }
            ans += (max - min);
            }
            
        }
        return ans;
    }
};