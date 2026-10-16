class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        long long mod = 1e9 + 7;
        
        vector<long long> sum(4 * n, 0);
        vector<long long> squareSum(4 * n, 0);
        vector<long long> lazy(4 * n, 0);
        
        auto apply = [&](int node, int l, int r, long long val) {
            long long len = (r - l + 1);
            squareSum[node] = (squareSum[node] + 2 * val * sum[node] + val * val % mod * len) % mod;
            sum[node] = (sum[node] + val * len) % mod;
            lazy[node] = (lazy[node] + val) % mod;
        };
        
        auto push = [&](int node, int l, int r) {
            if (lazy[node] != 0) {
                int mid = (l + r) / 2;
                apply(2 * node, l, mid, lazy[node]);
                apply(2 * node + 1, mid + 1, r, lazy[node]);
                lazy[node] = 0;
            }
        };

        auto update = [&](auto& self, int node, int l, int r, int ql, int qr, long long val) -> void {
            if (ql > r || qr < l) return;
            if (ql <= l && r <= qr) {
                apply(node, l, r, val);
                return;
            }
            push(node, l, r);
            int mid = (l + r) / 2;
            self(self, 2 * node, l, mid, ql, qr, val);
            self(self, 2 * node + 1, mid + 1, r, ql, qr, val);
            sum[node] = (sum[2 * node] + sum[2 * node + 1]) % mod;
            squareSum[node] = (squareSum[2 * node] + squareSum[2 * node + 1]) % mod;
        };

        auto query = [&](auto& self, int node, int l, int r, int ql, int qr) -> long long {
            if (ql > r || qr < l) return 0;
            if (ql <= l && r <= qr) return squareSum[node];
            push(node, l, r);
            int mid = (l + r) / 2;
            return (self(self, 2 * node, l, mid, ql, qr) + 
                    self(self, 2 * node + 1, mid + 1, r, ql, qr)) % mod;
        };

        unordered_map<int, int> last_pos;
        long long total_ans = 0;

        for (int i = 0; i < n; ++i) {
            int prev = -1;
            if (last_pos.count(nums[i])) {
                prev = last_pos[nums[i]];
            }
            update(update, 1, 0, n - 1, prev + 1, i, 1);
            last_pos[nums[i]] = i;

            long long current_subarrays_sum_squares = query(query, 1, 0, n - 1, 0, i);
            total_ans = (total_ans + current_subarrays_sum_squares) % mod;
        }

        return total_ans;
    }
};