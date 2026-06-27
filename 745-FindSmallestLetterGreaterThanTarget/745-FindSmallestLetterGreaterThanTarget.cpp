// Last updated: 6/27/2026, 7:29:32 PM
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        for(int i = 0; i<letters.size(); i++){
            if(letters[i] > target){
                return letters[i];
                break;
            }
        }
        return letters[0];
    }
};