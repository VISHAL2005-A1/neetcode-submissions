class Solution {
   public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n == 0) {
            return s;
        }
        string ans = "";
        for (int i = 0; i < n; i++) {
            int l;
            int r;
            // for odd length palindrome
            l = i;
            r = i;
            while (l >= 0 && r < n && s[l] == s[r]) {
                l--;
                r++;
            }
            string odd = s.substr(l + 1, r - l - 1);
            // for even length palindrome
            l = i;
            r = i + 1;
            while (l >= 0 && r < n && s[l] == s[r]) {
                l--;
                r++;
            }
            string even = s.substr(l + 1, r - l - 1);
            if (odd.size() > ans.size()) ans = odd;
            if (even.size() > ans.size()) ans = even;
        }
        return ans;
    }
};
