class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        if (m == 0)
            return 0;
        int n = mat[0].size();
        if (n == 0)
            return 0;

        vector<int> rows(m, 0);
        vector<int> cols(n, 0);

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (mat[i][j] == 1) {
                    rows[i]++;
                    cols[j]++;
                }
            }
        }

        int special_count = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {

                if (mat[i][j] == 1 && rows[i] == 1 && cols[j] == 1) {
                    special_count++;
                }
            }
        }

        return special_count;
    }
};