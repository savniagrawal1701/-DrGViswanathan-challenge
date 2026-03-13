class Solution {
public:
    int maxDistinct(string s) {
        set<int> set1;
        for(int i =0;i<s.size();i++){
            set1.insert(s[i]);
        }
        return set1.size();
    }
};