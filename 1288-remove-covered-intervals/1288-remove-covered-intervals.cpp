class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        int count = n;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j) continue;
                //is i covered by j
                if(intervals[i][0] >= intervals[j][0] && intervals[i][1] <= intervals[j][1]){
                    //avoid double counting when identical intervals cover each other
                    if(intervals[i][0] == intervals[j][0] && intervals[i][1] == intervals[j][1] && j<i){
                        continue;
                    }
                    count--;
                    break;
                }
            }
        }
        return count;
    }
};