class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;
        int mini = INT_MAX;
        int max_val = 0;
        for (int i = 0; i < n; i++) {
            max_val = max(max_val, nums[i]);
        }
        vector<int> hash(max_val + 1, 0);
        for (int i = 0; i < n; i++) {
            hash[nums[i]]++; // hash cannot access this until declared of a size
                             // with everything 0
        }
        int m = hash.size();

        for (int i = 0; i < m; i++) {
            if (hash[i] >= 3) { //>=3 wala logic nhi aaya
                vector<int> tuple;
                for (int j = 0; j < n; j++) {
                    if (nums[j] == i) {
                        tuple.push_back(j);
                    }
                }
                for (int k = 0; k + 2 < tuple.size(); k++) {
                    int current_ans = abs(tuple[k] - tuple[k + 1]) +
                                      abs(tuple[k + 1] - tuple[k + 2]) +
                                      abs(tuple[k + 2] - tuple[k]);
                    // jab size zayda ho jaaye like hamare pass 4 hai koi
                    // element to konsa distnace lena hai uske liye iteration
                    mini = min(current_ans, mini);
                }
            }
        }
        return mini == INT_MAX
                   ? -1
                   : mini; // if int max is returing toh -1 return karvana
    }
};
