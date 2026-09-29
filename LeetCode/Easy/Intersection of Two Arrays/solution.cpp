class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());

        vector<int> result;

        for (int num : nums2) {
            if (binary_search(nums1.begin(), nums1.end(), num)) {
                if (find(result.begin(), result.end(), num) == result.end()) {
                    result.push_back(num);
                }
            }
        }

        return result;
    }
};