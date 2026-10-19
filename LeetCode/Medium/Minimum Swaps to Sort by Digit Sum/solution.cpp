class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        auto getDigitSum = [](int x) {
            int sum = 0;
            while (x > 0) {
                sum += x % 10;
                x /= 10;
            }
            return sum;
        };

        vector<pair<pair<int, int>, int>> arr(n);
        for (int i = 0; i < n; ++i) {
            arr[i] = {{getDigitSum(nums[i]), nums[i]}, i};
        }

        sort(arr.begin(), arr.end());

        vector<bool> visited(n, false);
        int swaps = 0;

        for (int i = 0; i < n; ++i) {
            if (visited[i] || arr[i].second == i) {
                continue;
            }

            int cycleSize = 0;
            int j = i;
            while (!visited[j]) {
                visited[j] = true;
                j = arr[j].second;
                cycleSize++;
            }

            if (cycleSize > 1) {
                swaps += (cycleSize - 1);
            }
        }

        return swaps;
    }
};