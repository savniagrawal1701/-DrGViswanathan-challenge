class Solution {
public:
int sum(int n ){
    int count=0;
    while(n>0){
        count=count+(n%10);
        n=n/10;
    }
    return count;
}
    int countBalls(int lowLimit, int highLimit) {
        vector<int> hash(46,0);
        int maxi=0;
        for(int i =lowLimit;i<=highLimit;i++){
            int a =sum(i);
            hash[a]=hash[a]+1;
        }
        for(int i =1;i<=45;i++){
         maxi=max(maxi,hash[i]);
        }
        return maxi;
    }
};