class Solution {
public:
    int findGCD(vector<int>& nums) {
        int smallest = INT_MAX, largest = INT_MIN;
        for(int x : nums){
            if(x < smallest) smallest = x;
            if(x > largest) largest = x;
        }
        return gcd(smallest, largest);
    }
};