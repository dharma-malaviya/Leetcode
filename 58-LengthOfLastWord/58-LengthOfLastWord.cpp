// Last updated: 6/27/2026, 7:30:14 PM
class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size()-1;

        while(i>=0 && s[i] == ' '){
            i--;
        }

    int count = 0;
        while(i >= 0 && s[i] != ' '){
            count++;
            i--;
        }
        return count;
    }
};