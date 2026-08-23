class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int count = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == target) {
                count++;
            }
        }

        vector<int> ans(count);
        int j = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == target) {
                ans[j] = i;
                j++;
            }
        }

        return ans;
    }
};