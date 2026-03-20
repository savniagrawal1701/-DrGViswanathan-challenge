class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(), capacity.end());
        int sum = 0;
        for (int i = 0; i < apple.size(); i++) {
            sum = sum + apple[i];
        }
        int sum2 = 0;
        int n = capacity.size();
        int ans = 0;
        for (int i = n - 1; i >= 0; i--) {
            sum2 = sum2 + capacity[i];
            if (sum2 >= sum) {
                ans = n - i;
                break;
            } else {
                continue;
            }
        }
        return ans;
    }
};
