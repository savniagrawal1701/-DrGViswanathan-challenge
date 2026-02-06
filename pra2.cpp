//1523. Count Odd Numbers in an Interval Range
class Solution {
public:
    int countOdds(int low, int high) {
       int ans=(high+1)/2-(low/2);
       return ans;
    }
};