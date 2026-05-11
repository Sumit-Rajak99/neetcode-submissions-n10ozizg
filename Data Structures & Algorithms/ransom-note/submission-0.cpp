class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> freq(26, 0);

        // magazine ke characters count karo
        for(char ch : magazine) {
            freq[ch - 'a']++;
        }

        // ransomNote ke characters check karo
        for(char ch : ransomNote) {
            if(freq[ch - 'a'] == 0) {
                return false;
            }

            freq[ch - 'a']--;
        }

        return true;
    }
};