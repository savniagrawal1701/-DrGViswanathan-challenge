class Solution {
public:
    int reverseInt(int n) {
        long long rev = 0;
        while (n > 0) {
            rev = rev * 10 + n % 10;
            n /= 10;
        }
        return (int)rev;
    }
    
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int, int> seen;  // Stores: number -> its position
        int minDist = INT_MAX;
        
        for (int j = 0; j < nums.size(); j++) {
            // Check if current number equals reverse of some previous number
            if (seen.count(nums[j])) {
                int i = seen[nums[j]];
                minDist = min(minDist, j - i);
            }
            
            // Store the reverse of current number for future checks
            int reversed = reverseInt(nums[j]);
            seen[reversed] = j;
        }
        
        return minDist == INT_MAX ? -1 : minDist;
    }
};
