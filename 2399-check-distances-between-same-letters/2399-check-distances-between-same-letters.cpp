class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        int n = s.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int diff = j-i-1;
                if(s[i] == s[j]){
                    if(diff != distance[s[i] - 'a']){
                        return false;
                    }
                    break;
                }
            }
        }
        return true;
    }
};