class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();

        // Step 1: skip leading whitespace
        while(i<n && s[i] == ' '){
            i++;
        }

        // Step 2: read sign
        int sign = 1;
        if(i < n && (s[i] == '-' || s[i] == '+')){
            if(s[i] == '-'){
                sign = -1;
            }
            i++;
        }

        // Step 3: read digits with overflow check
        long long ans = 0;
        while(i < n && isdigit(s[i])){
            int digit = s[i] - '0';
            // Check overflow BEFORE updating result
            if(ans > (INT_MAX - digit) / 10){
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            ans = ans * 10 + digit;
            i++;
        }
        return sign*ans;
    }
};