class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
      priority_queue<int,vector<int>, greater<int>> heap;  
      for (int i = 0; i < nums.size(); i++) {
        heap.push(nums[i]);
    }

    for (int i = 0; i < nums.size(); i++) {
        nums[i] = heap.top();
        heap.pop();
    }
    return nums;
    }
};
