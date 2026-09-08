class Solution {
public:
    int countCommas(int n) {
        int total = 0;
        for(int i=1; i<=n; i++){
            int d=0;
            int x = i;
            while(x>0){
                d++;
                x /= 10;
            }
            total += (d-1) / 3;
        }
        return total;
    }
};