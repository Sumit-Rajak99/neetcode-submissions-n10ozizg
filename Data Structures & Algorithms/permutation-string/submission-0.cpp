class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.length();
        int n2 = s2.length();

        if (n1 > n2) return false;

        vector<int> count1(26, 0), count2(26, 0);
        int left = 0, right = 0, ans = 0;


        while (right < n1) {
            count1[s1[right] - 'a']++;
            count2[s2[right] - 'a']++;
            right++;
        }

        if (count1 == count2) return true;

        
        while (right < n2) {
            count2[s2[right] - 'a']++;     
            count2[s2[left] - 'a']--;     
            left++;
            right++;

            if (count1 == count2) return true;
        }

        return false;
    }
};
