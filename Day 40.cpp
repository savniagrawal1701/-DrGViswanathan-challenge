//40
class Solution {
public:
int countSetBits(int n) {
        int count = 0;  
        while (n!=0) {
            n =n & (n - 1);  
            count++;  // Increment the count
        }
   
        return count;
    }
 
    vector<int> sortByBits(vector<int>& arr) {
       sort(arr.begin(), arr.end(), [this](int a, int b) {
            int countA = countSetBits(a);
            int countB = countSetBits(b);
            
            if (countA == countB) {
                return a < b;
            }
            
            return countA < countB;
        });
        
        return arr;
    }
};
