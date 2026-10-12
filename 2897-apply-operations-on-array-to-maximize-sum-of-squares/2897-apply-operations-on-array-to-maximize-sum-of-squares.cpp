class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        vector<int> bit_counts(32, 0);
        for (int x : nums) {
            for (int i = 0; i < 32; i++) {
                if ((x >> i) & 1) {
                    bit_counts[i]++;
                }
            }
        }
        
        long long total_sum = 0;
        long long MOD = 1e9 + 7;
        
        for (int step = 0; step < k; step++) {
            long long current_num = 0;
            for (int i = 0; i < 32; i++) {
                if (bit_counts[i] > 0) {
                    current_num |= (1LL << i);
                    bit_counts[i]--;
                }
            }
            total_sum = (total_sum + (current_num * current_num) % MOD) % MOD;
        }
        
        return total_sum;
    }
};