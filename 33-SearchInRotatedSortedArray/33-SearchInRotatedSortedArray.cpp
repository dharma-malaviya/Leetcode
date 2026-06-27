// Last updated: 6/27/2026, 7:30:29 PM
class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int st = 0, end = n-1;

        while(st <= end){
            int mid = st + (end-st)/2;

            if(arr[mid] == target){
                return mid;
            }
            // Remove duplicates
            if (arr[st] == arr[mid] && arr[mid] == arr[end]) {
                st++;
                end--;
            }
            else if(arr[st] <= arr[mid]){     //left sorted
                if(arr[st] <= target && target < arr[mid]){
                    end = mid - 1;
                }
                else{
                    st = mid + 1;
                }
            }

            else{   //right sorted
                if(arr[mid] < target && target <= arr[end]){
                    st = mid + 1;
                }
                else{
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};