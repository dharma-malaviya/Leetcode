class Solution {
public:
    int minimumMoves(string s) {
        int n = s.size();
        int i = 0, move = 0;
        while(i<n){
            if(s[i] == 'X'){
                move++;
                i += 3;
            }
            else{
                i++;
            }
        }
        return move;
    }
};