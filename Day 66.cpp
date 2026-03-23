class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;
        vector<int> ans;
        int n =nums.size();
        for(int i =0;i<nums.size();i++){
            if(nums[i]>=0){
                even.push_back(nums[i]);
            }else{
                 odd.push_back(nums[i]);
            }
        }

        for(int i=0;i<n/2;i++){
               ans.push_back(even[i]);
               ans.push_back(odd[i]);
        }
        return ans;
    }
};
