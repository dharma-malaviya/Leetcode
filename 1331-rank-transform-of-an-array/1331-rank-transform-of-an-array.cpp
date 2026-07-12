class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int> sorted_arr = arr;
        sort(sorted_arr.begin(), sorted_arr.end());
        vector<int> result;
        unordered_map<int, int> rankMap;

        int rank = 1;
        for(int x : sorted_arr){
            if(rankMap.find(x) == rankMap.end()){
                rankMap[x] = rank++;
            }
        }

        for(int x : arr){
            result.push_back(rankMap[x]);
        }
        return result;
    }
};