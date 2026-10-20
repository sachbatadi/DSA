class Solution {
public:
    int sortableIntegers(vector<int>& nums) {
        int n = nums.size();
        vector<int> sorted_nums = nums;
        sort(sorted_nums.begin(), sorted_nums.end());

        int total_sum = 0;

        for (int k = 1; k <= n; ++k) {
            if (n % k != 0) continue;

            bool is_sortable = true;

            for (int i = 0; i < n; i += k) {
                bool found_rotation = false;

                for (int shift = 0; shift < k; ++shift) {
                    bool match = true;
                    for (int j = 0; j < k; ++j) {
                        if (nums[i + j] != sorted_nums[i + (j + shift) % k]) {
                            match = false;
                            break;
                        }
                    }
                    if (match) {
                        found_rotation = true;
                        break;
                    }
                }

                if (!found_rotation) {
                    is_sortable = false;
                    break;
                }
            }

            if (is_sortable) {
                total_sum += k;
            }
        }

        return total_sum;
    }
};