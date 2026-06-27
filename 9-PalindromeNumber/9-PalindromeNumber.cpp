// Last updated: 6/27/2026, 7:30:41 PM
class Solution {
public:
    bool isPalindrome(int x) {
      int revN=0;
      int original=x;
      if(x<0){
        return false;
      }
      while(x!=0){
        int digit=x%10;
        if(revN> INT_MAX/10 || revN<INT_MIN/10){
            return 0;
        }
        revN=(revN*10)+digit;
        x=x/10;
      }
      return original==revN; 
    }
};