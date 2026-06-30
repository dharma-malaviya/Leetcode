class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        stringstream ss(s);
        string word;

        while(ss >> word){
            words.push_back(word);
        }
        
        if(pattern.size() != words.size()) return false;

        unordered_map<char, string> PS;
        unordered_map<string, char> SP;

        for(int i=0; i<pattern.size(); i++){
            char a = pattern[i];
            string b = words[i];

            if(PS.count(a) && PS[a] != b) return false;
            if(SP.count(b) && SP[b] != a) return false;

            PS[a] = b;
            SP[b] = a;
        } 
        return true;       
    }
};