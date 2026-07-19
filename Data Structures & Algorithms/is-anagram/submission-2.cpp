class Solution {
   public:
    bool isAnagram(string s, string t) {
        int n1 = s.length();
        int n2 = t.length();
        int freq1[26] = {0};
        int freq2[26] = {0};
        if (n1 != n2) {
            return false;
        }
        int a = 97;
        for (int i = 0; i < n1; i++) {
            (freq1[s[i] - a])++;
            (freq2[t[i] - a])++;
        }
        int s1 = sizeof(freq1) / sizeof(freq1[0]);
        int s2 = sizeof(freq2) / sizeof(freq2[0]);
        if (s1 != s2) {
            return false;
        }

        for (int i = 0; i < s1; i++) {
            if (freq1[i] != freq2[i]) {
                return false;
            }
        }
        return true;
    }
};
