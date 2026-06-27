// Last updated: 6/27/2026, 7:29:30 PM
class Solution {
public:
    int binSearch(vector<int>& nums, int tar, int st, int end) {

        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]<tar){
                return binSearch(nums, tar, mid+1, end);
            }
            else if(nums[mid]>tar){
                return binSearch(nums, tar, st, mid-1);
            }
            else{
                return mid;
            }
        }
        return -1;
    }
    int search(vector<int>& arr, int tar) {
        return binSearch(arr, tar, 0, arr.size()-1);
    }
};