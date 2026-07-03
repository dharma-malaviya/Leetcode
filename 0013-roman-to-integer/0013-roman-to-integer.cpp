class Solution {
public:

    int RI(char c){
        vector<pair<char, int>> p = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        for(auto a : p){
            if(a.first == c){
                return a.second;
            }
        }
        return 0;
    }

    int romanToInt(string s) {
        int n = s.size();
        int ans = 0;
        for(int i=0; i<n; i++){
            if(RI(s[i]) >= RI(s[i+1])){
                ans += RI(s[i]);
            }
            else{
                ans += (RI(s[i+1]) - RI(s[i]));
                i++;
            }
        }
        return ans;
    }
};