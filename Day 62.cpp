class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
       sort(satisfaction.begin(), satisfaction.end());
        
        int total_satisfaction = 0;
        int current_sum = 0;
        int n = satisfaction.size();
        
        for (int i = n - 1; i >= 0; i--) {
            current_sum += satisfaction[i];
        
            if (current_sum > 0) {
                total_satisfaction += current_sum;
            } else {
           
                break;
            }
        }
        
        return total_satisfaction;
    }
};
