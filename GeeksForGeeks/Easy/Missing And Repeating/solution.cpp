class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n + 1, 0);

        // 1. Count frequencies without going out of bounds
        for (int i = 0; i < n; i++) {
            int el = arr[i];
            ans[el]++;
        }

        int missing = -1;
        int repating = -1;

        // 2. Check counts from 1 to n
        for (int i = 1; i <= n; i++) {
            if (ans[i] > 1) {
                repating = i;
            }
            if (ans[i] == 0) {
                missing = i;
            }
        }

        return {repating, missing};
    }
};