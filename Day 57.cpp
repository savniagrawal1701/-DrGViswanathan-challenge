class Solution {
public:
    char repeatedCharacter(string s) {
     int count[26] = {0};
    for (char c : s) {
    
        int index = c - 'a';
        count[index]++;

        if (count[index] == 2) {
            return c; 
        }
    }

    return '\0';
    }
};
