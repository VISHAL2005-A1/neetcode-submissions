class Solution {
   public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
       
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;

        }
        bool isOdd=false;
        int count = 0;
        for(auto &it:mp){
            if(it.second%2==0){
                count+=it.second;
            }else{
                count+=it.second-1;
                isOdd=true;
            }
        }
        if(isOdd) count+=1;
       
        return count;
    }
};