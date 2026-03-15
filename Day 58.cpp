class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
     
       int totalTime = 0;
        // Map to store the last index reached by each garbage type
        unordered_map<char, int> lastHouse;
        
        //  Calculate collection time and find last indices
        for (int i = 0; i < garbage.size(); i++) {
            totalTime += garbage[i].length();
            for (char c : garbage[i]) {
                lastHouse[c] = i;
            }
        }
        
        //  Add travel time for each truck type
        // The truck travels from house 0 up to lastHouse[type]
        char types[] = {'G', 'P', 'M'};
        for (char t : types) {
            // Only add travel if the garbage type was actually found
            if (lastHouse.count(t)) {
                for (int i = 0; i < lastHouse[t]; i++) {
                    totalTime += travel[i];
                }
            }
        }
        
        return totalTime;
    }
};
