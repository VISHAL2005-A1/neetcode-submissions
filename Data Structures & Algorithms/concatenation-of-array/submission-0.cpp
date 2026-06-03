class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        int k=0;
        for(int i=0;i<n;i++){
            ans.push_back(nums[i]);
            if(i==n-1){
            ans.insert(ans.begin()+n,nums.begin(),nums.end());

            }
        }
        return ans;
    }
};