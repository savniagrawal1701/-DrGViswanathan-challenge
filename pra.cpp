class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;
        for(int i =0;i<nums.size();i++){
            int a=nums[i];
         for (int j = 1; j < nums[i]; j++) {
                if ((j | (j + 1)) == nums[i]) {
                    nums[i] = j;
                    break;
                }
            }
            if (nums[i] == a) {
                nums[i] = -1;
            }
        }
        return nums;
    }
};