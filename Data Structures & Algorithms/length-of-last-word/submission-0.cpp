class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int count = 0;
        int i = s.length() - 1;
        
        // Step 1: Remove trailing spaces
        while(i >= 0 && s[i] == ' ') {
            i--;
        }
        
        // Step 2: Count characters of last word
        while(i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }
        
        return count;
    }
};