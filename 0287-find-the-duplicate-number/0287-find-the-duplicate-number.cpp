class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int max=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                max=nums[i];
            }
        }
        vector<int> ans(max + 1, 0);

        for(int i=0;i<nums.size();i++){
            int el=nums[i];
            ans[el]++;
        }
        for(int i=0;i<ans.size();i++){
            if(ans[i]>1){
                return i;
            }
        }
        return -1;
    }
};