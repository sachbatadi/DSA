class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        vector<long long> squared(n);
        
        for (int i = 0; i < n; ++i) {
            long long val = nums[i];
            squared[i] = val * val;
        }
        
        sort(squared.begin(), squared.end());
        
        long long maxScore = 0;
        int mid = n / 2;
        
        for (int i = 0; i < mid; ++i) {
            maxScore -= squared[i];
        }
        
        for (int i = mid; i < n; ++i) {
            maxScore += squared[i];
        }
        
        return maxScore;
    }
};