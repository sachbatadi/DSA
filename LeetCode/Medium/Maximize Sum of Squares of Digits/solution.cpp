#include <string>
#include <algorithm>

class Solution {
public:
    std::string maxSumOfSquares(int num, int sum) {
        if (sum < 1 || sum > 9LL * num) {
            return "";
        }

        std::string result = "";
        result.reserve(num);

        for (int i = 0; i < num; ++i) {
            int high = std::min(9, sum);
            result += std::to_string(high);
            sum -= high;
        }

        return result;
    }
};