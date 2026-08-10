class Solution {
public:

    string nextTerm(const string& s){
        string next;
        next.reserve(s.size()*2);
        int j=0,
         m=s.size();

        while(j<m){
            char c = s[j];
            int count = 0;
            while(j<m && s[j] == c){
                count++;
                j++;
            }
            next += to_string(count);
            next += c;
        }
        return next;
    }

    string countAndSay(int n) {
        string result = "1";
        for(int i=1; i<n; i++){
            result = nextTerm(result);
        }
        return result;
    }
};