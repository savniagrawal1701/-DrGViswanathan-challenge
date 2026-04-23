class Solution {
public:
int findinfriend(vector<int>& friends,int id){
    for(int i =0;i<friends.size();i++){
        if(friends[i]==id){
            return 1;
        }
    }
    return 0;
}
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> ans;
        for(int i =0;i<order.size();i++){
            if(findinfriend(friends,order[i])==1){
                ans.push_back(order[i]);
            }
        }
        return ans;
    }
};
