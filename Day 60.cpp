class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sum=0;
     
        int n =nums.size();
     for(int i =0;i<n;i++){
        if(i%2==0){
            sum=sum+nums[i];
        }else{
            sum=sum-nums[i];
        }
     }
return sum;
    }
};
