class Solution {
public:
    string find(vector<string>& nums) {
        string res = "";
        for (int i = 0; i < nums.size(); i++) {
            res += (nums[i][i] == '0' ? '1' : '0');
        }
        return res;
    }
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        unordered_set<string> seen(nums.begin(), nums.end());

        for (string s : nums) {
            string candidate = s;
            for (char& c : candidate) {
                c = (c == '0') ? '1' : '0';
            }

            if (seen.find(candidate) == seen.end()) {
                return candidate;
            }
        }

        return find(nums);
    }

};
