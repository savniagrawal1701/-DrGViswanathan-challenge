class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int ans = 0;
        int maxi = -1;
        int maxii = -1;
        int ans1 = 0;
        int n = colors.size();
        int i = 0;
        int j = n - 1;
        int k = 0;
        int l = n - 1;
        while (i <= j) {
            if (colors[i] != colors[j]) {
                ans = abs(i - j);

                maxi = max(maxi, ans);

            } j--;
        }
        while (k <= l) {
            if (colors[k] != colors[l]) {

                ans1 = abs(k - l);

                maxii = max(maxii, ans1);
            }
            k++;
        }

        return max(maxii, maxi);
    }
};
