class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int val=-1;
        int mini=INT_MAX;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==target){
                val=abs(i-start);
                mini=min(mini,val);
            }
        
        }
        return mini;
    }
};
