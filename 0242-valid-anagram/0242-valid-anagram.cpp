class Solution {
public:
    bool isAnagram(string s, string t) {
        int m = s.length(), n = t.length();
        if(m != n){
            return false;
        }
        // Count frequency of each character in str1
        int freq[26] = {0};
        for(int i=0; i<m; i++){
            freq[s[i] - 'a']++;
        }
        // Decrement frequency for each character in str2
        for(int i=0; i<n; i++){
            freq[t[i] - 'a']--;
        }
        // Check if all frequencies are zero, meaning both strings have the same characters
        for(int i=0; i<26; i++){
            if(freq[i] != 0){
                return false;
            }
        }
        return true;
    }
};