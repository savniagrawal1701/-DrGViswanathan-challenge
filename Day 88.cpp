class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
         int n = capacity.size();
    vector<int> remainingCapacity(n);

    
        for (int i = 0; i < n; ++i) {
            remainingCapacity[i] = capacity[i] - rocks[i];
        }

        sort(remainingCapacity.begin(), remainingCapacity.end());

        int fullBagsCount = 0;
        
        for (int i = 0; i < n; ++i) {
            if (additionalRocks >= remainingCapacity[i]) {
                additionalRocks -= remainingCapacity[i];
                fullBagsCount++;
            } else {
             
                break;
            }
        }

        return fullBagsCount;
    }
};
