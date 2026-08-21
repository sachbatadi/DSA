class Solution {
public:

    int trap(vector<int>& arr) {

        int n = arr.size();
        int larr[n];
        int rarr[n];
        larr[0] = arr[0];
        rarr[n-1] = arr[n-1];
        for(int i = 1; i < n; i++) {
            larr[i] = max(arr[i], larr[i-1]);
        }

        
        for(int i = n-2; i >= 0; i--) {
            rarr[i] = max(arr[i], rarr[i+1]);
        }

        int ans = 0;

        for(int i = 0; i < n; i++) {
            ans += min(larr[i], rarr[i]) - arr[i];
        }

        return ans;
    }
};