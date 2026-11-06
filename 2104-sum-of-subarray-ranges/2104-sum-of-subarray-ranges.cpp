class Solution {
public:
    // Previous Strictly Smaller Element
    vector<int> findPreviousLess(vector<int> &nums){
       int n = nums.size();
       vector<int> previousLess(n, -1);
       stack<int> st;

       for(int i=0; i<n; i++){
        while(!st.empty() && nums[st.top()] >= nums[i]){
            st.pop();
        }
        if(!st.empty()){
            previousLess[i] = st.top();
        }
        st.push(i);
       } 
    return previousLess;
    }

     // Next Smaller or Equal Element
    vector<int> findNextLessOrEqual(vector<int>& nums) {
        int n = nums.size();
        vector<int> nextLessOrEqual(n, n);
        stack<int> st;

        for(int i = n-1; i >= 0; i--) {

            while(!st.empty() &&
                  nums[st.top()] > nums[i]) {
                st.pop();
            }

            if(!st.empty()) {
                nextLessOrEqual[i] = st.top();
            }

            st.push(i);
        }

        return nextLessOrEqual;
    }

    //Previous Strictly Greater Element
    vector<int> findPreviousGreater(vector<int> nums){
        int n = nums.size();
        vector<int> previousGreater(n,-1);
        stack<int> st;

        for(int i = 0; i < n; i++) {

            while(!st.empty() &&
                  nums[st.top()] <= nums[i]) {
                st.pop();
            }

            if(!st.empty()) {
                previousGreater[i] = st.top();
            }

            st.push(i);
        }

        return previousGreater;
    }

    // Next Greater or Equal Element
    vector<int> findNextGreaterOrEqual(vector<int>& nums) {
        int n = nums.size();
        vector<int> nextGreaterOrEqual(n, n);
        stack<int> st;

        for(int i=n-1; i>=0; i--){
            while(!st.empty() && nums[st.top()] < nums[i]){
                st.pop();
            }
            if(!st.empty()){
                nextGreaterOrEqual[i] = st.top();
            }
            st.push(i);
        }

        return nextGreaterOrEqual;
    }

    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size(); 

        // Minimum boundaries
        vector<int> previousLess = findPreviousLess(nums);
        vector<int> nextLessOrEqual = findNextLessOrEqual(nums);

        // Maximum boundaries
        vector<int> previousGreater = findPreviousGreater(nums);
        vector<int> nextGreaterOrEqual = findNextGreaterOrEqual(nums);

        long long sumMin = 0;
        long long sumMax = 0;  

         for(int i = 0; i < n; i++) {

            // Contribution as minimum
            long long leftMin = i - previousLess[i];
            long long rightMin = nextLessOrEqual[i] - i;

            sumMin += 1LL * nums[i] * leftMin * rightMin;

            // Contribution as maximum
            long long leftMax = i - previousGreater[i];
            long long rightMax = nextGreaterOrEqual[i] - i;

            sumMax += 1LL * nums[i] * leftMax * rightMax;
        }

        return sumMax - sumMin;    
    }
};