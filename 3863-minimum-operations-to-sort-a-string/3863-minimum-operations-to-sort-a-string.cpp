class Solution {
public:
    int minOperations(string s) {
        int n = s.length();
        string sorted_s = s;
        sort(sorted_s.begin(), sorted_s.end());
        if (s == sorted_s) return 0;
        if (n <= 2) return -1;
        
        char mn = sorted_s[0];
        char mx = sorted_s.back();
        
        bool mn_at_start = (s[0] == mn && s != string(n, s[0]));
        bool mx_at_end = (s.back() == mx && s != string(n, s.back()));
        
        if (mn_at_start || mx_at_end) return 1;
        
        bool has_mn_prefix = false;
        bool has_mx_suffix = false;
        
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == mn) has_mn_prefix = true;
        }
        for (int i = 1; i < n; ++i) {
            if (s[i] == mx) has_mx_suffix = true;
        }
        
        if (!has_mn_prefix && !has_mx_suffix) return 3;
        return 2;
    }
};
