class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        string s1 = "1";
        string s2 = "0";
        for (int i = 1; i < n; i++) {
            if (i % 2 == 0) {
                s1 = s1 + '1';
                s2 = s2 + '0';

            } else {
                s1 = s1 + '0';
                s2 = s2 + '1';
            }
        }
        int count1 = 0;
        int count2 = 0;

        for (int i = 0; i < n; i++) {

            if (s[i] != s1[i]) {
                count1++;
            } else if (s[i] != s2[i]) {
                count2++;
            }
        }
        int mini = min(count1, count2);
        return mini;
    }
};