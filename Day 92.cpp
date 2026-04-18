class Solution {
public:
int reverseint(int n ){
     long long rev = 0;
        while (n > 0) {
            rev = rev * 10 + n % 10;
            n /= 10;
        }
        return (int)rev;
}
    int mirrorDistance(int n) {
        int ans=abs(n-reverseint(n));
        return ans;
    }
};
