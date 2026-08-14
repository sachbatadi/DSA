class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int s = nums.size();
        // int min = LONG_MIN;
        long max = LONG_MIN;
        long max2 = LONG_MIN;
        long max3 = LONG_MIN;

        for (int i = 0; i < s; i++) {
            if (max < nums[i]) {
                max3 = max2;
                max2 = max;
                max = nums[i];
            } else if ((max2 < nums[i]) && (max > nums[i])) {
                max3 = max2;
                max2 = nums[i];
            } else if ((max3 < nums[i]) && (max2 > nums[i])) {
                max3 = nums[i];
            }
        }

        
        return max3 == LONG_MIN ? static_cast<int>(max) : static_cast<int>(max3);

    }
};