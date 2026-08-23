class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n=nums.size();
        int arr1[50];
        int arr2[50];

        int idx1=0;
        int idx2=0;

        arr1[idx1++]=nums[0];
        arr2[idx2++]=nums[1];
        for(int i=2;i<nums.size();i++){
            if(arr1[idx1 - 1] > arr2[idx2 - 1]){
                arr1[idx1++]=nums[i];
            }
            else{
                arr2[idx2++] = nums[i];
            }
        }
        vector<int> result(n);
        int residx=0;
        for(int i=0;i<idx1;i++){
            result[residx++]=arr1[i];
        }
        for(int i=0;i<idx2;i++){
            result[residx++]=arr2[i];
        }
        return result;
    }
};