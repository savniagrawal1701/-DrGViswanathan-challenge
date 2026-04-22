class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int n = grades.size();
        int count = 0;
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            if (sum + i <= n) {
                count = count + 1;
                sum=sum+i;
            } else {
                return count;
            }
        }
        return count;
    }
};
