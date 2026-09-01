class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int last = arr.back();
        int j = 0;
        int i = 1;
        int count = 0;

        while(1){
            if(j < arr.size() && arr[j] == i){
                j++;
            }
            else{
                count++;
                if(count == k) return i;
            }
            i++;
        }
        return -1;
    }
};