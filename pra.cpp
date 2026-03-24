class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int, int> counts;
        for (int i = 0; i < arr.size(); i++) {
            int currentNumber = arr[i];
            counts[currentNumber]++;
        }

        unordered_set<int> uniqueCounts;

        for (auto x : counts) {
            int frequency = x.second;
            uniqueCounts.insert(frequency);
        }

        return uniqueCounts.size() == counts.size();
    }
};