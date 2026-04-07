class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0;
        int j = n - 1;
        int sum = -1;
        int maxi = -1;
        while (i < j) {
            sum = nums[i] + nums[j];
            maxi = max(maxi, sum);
            i++;
            j--;
        }
        return maxi;
    }
};
