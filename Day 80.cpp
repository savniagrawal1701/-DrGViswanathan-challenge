class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
           priority_queue<int> maxHeap;

        for (int numSize : nums) {
            maxHeap.push(numSize);
        }
long long total=0;
        while (k--) {

            int largestnum= maxHeap.top();
            total=total+largestnum;
            maxHeap.pop();

            int remainingnum =ceil((largestnum +2) / 3);
            maxHeap.push(remainingnum);
        }

        return total;
    }
};
