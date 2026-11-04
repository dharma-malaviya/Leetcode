class Solution {
public:

    vector<int> findPreviousLess(vector<int>& arr) {
        int n = arr.size();
        vector<int> previousLess(n, -1);
        stack<int> st;

        for(int i=0; i<n; i++){
            while(!st.empty() && arr[st.top()] >= arr[i]){
            st.pop();
        }

         if(!st.empty()) {
            previousLess[i] = st.top();
        }
        st.push(i);
        }
        return previousLess;
    }

    // Find Next Smaller or Equal Element
    vector<int> findNextLessOrEqual(vector<int>& arr) {
        int n = arr.size();
        vector<int> nextLessOrEqual(n, n);
        stack<int> st;

        for(int i = n-1; i >= 0; i--) {

            while(!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }

            if(!st.empty()) {
                nextLessOrEqual[i] = st.top();
            }

            st.push(i);
        }

        return nextLessOrEqual;
    }

    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        int mod = 1e9 + 7;

        long long ans = 0;

        vector<int> previousLess = findPreviousLess(arr);
        vector<int> nextLessOrEqual = findNextLessOrEqual(arr);

        for (int i = 0; i < n; i++) {
            long long leftChoices = i - previousLess[i];
            long long rightChoices = nextLessOrEqual[i] - i;

            long long contribution = (1LL * arr[i] * leftChoices) % mod;

            contribution = (contribution * rightChoices) % mod;

            ans = (ans + contribution) % mod;
        }

        return (int)ans;
    }
};