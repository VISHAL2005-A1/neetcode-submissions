class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res=0;int count=0;
        for(int num:nums){
            count=num?count+1:0;
            res=max(count,res);
        }
        return res;
    }
};