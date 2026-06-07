class Solution {
public:

    string encode(vector<string>& strs) {
      string res;
      for(auto & it:strs){
        res+=to_string(it.size())+"#"+it;

      }
      return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int l=0;
        while(l<s.size()){
        int r=l;
            while(s[r]!='#'){
                r++;
            }
            int len=stoi(s.substr(l,r-l));
            string word=s.substr(r+1,len);
            res.push_back(word);
            l=r+1+len;
        }
         return res;
    }
};
