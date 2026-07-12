class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> freq(nums.size() + 1, 0);
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }
        int missing=-1;int duplicate=-1;
        for (int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1;
            if (nums[index] > 0) {
                nums[index] = -nums[index];
            }
        }
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                missing=(i + 1);
            }
            if (freq[i + 1] > 1) {
               duplicate=i+1;
            }
        }
        return {duplicate,missing};
    }
};