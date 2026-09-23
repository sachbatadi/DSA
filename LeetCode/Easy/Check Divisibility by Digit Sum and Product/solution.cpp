class Solution {
public:
    bool checkDivisibility(int n) {
        int temp = n;
        int sum = 0;
        long long pro = 1;
        while (temp > 0) {
            int digit = temp % 10;
            sum += digit;
            pro *= digit;
            temp /= 10;
        }
        long long total = sum + pro;
        if (total == 0) return false;
        return n % total == 0;
    }
};