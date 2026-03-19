class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int> v;
        int count0 = 0;
        int count1 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                count0++;
            } else {
                count1++;
            }
        }
        v.insert(v.end(), count0, 0);
        v.insert(v.end(), count1, 1);
        return v;
    }
};
