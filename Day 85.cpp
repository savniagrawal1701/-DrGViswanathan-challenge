class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        
        unordered_map<int, vector<int>> indices_map;
        
        for (int i = 0; i < n; i++) {
            indices_map[nums[i]].push_back(i);
        }

        for (auto& pair : indices_map) {
            vector<int>& tuple = pair.second; 
            
            if (tuple.size() >= 3) { 
                for (int k = 0; k + 2 < tuple.size(); k++) {
                    int current_ans = abs(tuple[k] - tuple[k+1]) + 
                                      abs(tuple[k+1] - tuple[k+2]) +
                                      abs(tuple[k+2] - tuple[k]);
                                      
                    mini = min(current_ans, mini);
                }
            }
        }
        
        return mini == INT_MAX ? -1 : mini;
    }
};
