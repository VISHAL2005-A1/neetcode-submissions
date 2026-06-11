class Solution {
   public:
    int strStr(string haystack, string needle) {
        int n1 = haystack.size();
        int n2 = needle.size();

        for (int i = 0; i < n1; i++) {
            int j = 0;
            while (j < n2 && haystack[i + j] == needle[j]) {
                j++;
            }
            if (j == n2) {
                return i;
            }
        }
        return -1;
    }
};