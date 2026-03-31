// class Solution {
// public:
//     int minimumRounds(vector<int>& tasks) {
//         sort(tasks.begin(),tasks.end());
//         int n =tasks.size();
//         vector<int> hash(tasks[n-1],0);
//         for(int i =0;i<n-1;i++){
//             hash[tasks[i]]++;
//         }
//         int total=0;
//         for(int i=1;i<tasks[n-1];i++){
//             if(hash[i]%3==0){
//  total=total+(hash[i]/3);
//             } else if(hash[i]%2==0){
//               total=total+(hash[i]/2);   
//             }
//             else{
// total=total+(hash[i]/3)+1;
//             }
//         }
//         return total;
//     }
// };

//still a memory issue: if the largest number in tasks is $10^9$ (which is common in these problems), your vector will still try to allocate $10^9$ integers, which is too much memory.

class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        sort(tasks.begin(), tasks.end());
        int n = tasks.size();
        vector<int> counts;

        int current_freq = 1;
        for (int i = 1; i < n; i++) {
            if (tasks[i] == tasks[i - 1]) {
                current_freq++;
            } else {
                counts.push_back(current_freq);
                current_freq = 1;
            }
        }
        counts.push_back(current_freq);

        int total = 0;
        for (int i = 0; i < counts.size(); i++) {
            int freq = counts[i];
            if (freq == 1) return -1;

            if (freq % 3 == 0) {
                total = total + (freq / 3);
            } else if (freq % 2 == 0) {
                total = total + (freq / 3) + 1;
            } else {
                total = total + (freq / 3) + 1;
            }
        }
        return total;
    }
};
