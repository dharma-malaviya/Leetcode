// Last updated: 6/27/2026, 7:29:22 PM
class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();
        // string ans;

        while(n>0){
            if((num[n-1] - '0') %2 != 0){
            return num;
            }
            else{
                num.pop_back();
                n--;
            }
        }
       return ""; 
    }
};