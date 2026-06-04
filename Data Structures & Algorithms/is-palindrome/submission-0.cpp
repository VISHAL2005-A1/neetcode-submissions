class Solution {
   public:
    bool isPalindrome(string s) {
        int n = s.length();

        transform(s.begin(), s.end(), s.begin(), ::tolower);

        int l = 0;
        int r = n - 1;
        while (l < r) {
            while (l < r && !isalnum(s[l])) {
                l++;
            }

            while (l < r && !isalnum(s[r])) {
                r--;
            }

            if (s[l] != s[r]) {
                return false;
            } else {
                l++;
                r--;
            }
        }
        return true;
    }
};
