#include <vector>
#include <unordered_set>

class Solution {
public:
    int sumCounts(std::vector<int>& nums) {
        int totalSum = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; ++i) {
            std::unordered_set<int> distinctElements;
            for (int j = i; j < n; ++j) {
                distinctElements.insert(nums[j]);
                int count = distinctElements.size();
                totalSum += count * count;
            }
        }
        
        return totalSum;
    }
};