// class Solution {
// public:
//     bool checkStrings(string s1, string s2) {
//      string even;
//      string odd;
//      string even1;
//      string odd1;
//      for(int i =0;i<s1.size();i++){
//         if(i%2==0){
//             even=even+s1[i];
//            even1=even1+s2[i];
//         }else{
//              odd=odd+s1[i];
//            odd1=odd1+s2[i]; 
//         }
//      }
//      sort(even.begin(),even.end());
//        sort(even1.begin(),even1.end());
//          sort(odd.begin(),odd.end());
//            sort(odd1.begin(),odd1.end());
//      if(odd==odd1 && even==even1){
//         return true;
//      }
//      return false;
//     }
// };
//memory exceed in above code
class Solution {
public:
    bool checkStrings(string s1, string s2) {
     
        vector<int> freqEven(26, 0);
        vector<int> freqOdd(26, 0);

        for (int i = 0; i < s1.size(); ++i) {
            if (i % 2 == 0) {
                freqEven[s1[i] - 'a']++;
                freqEven[s2[i] - 'a']--; 
            } else {
                freqOdd[s1[i] - 'a']++;
                freqOdd[s2[i] - 'a']--; // Decrement for s2
            }
        }

        for (int i = 0; i < 26; ++i) {
            if (freqEven[i] != 0 || freqOdd[i] != 0) {
                return false;
            }
        }

        return true;
    }
};
