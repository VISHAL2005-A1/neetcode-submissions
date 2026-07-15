class Solution {
   public:
    void allSubsets(int ind, vector<vector<int>>& ans, vector<int>& v, vector<int>& nums, int n) {
        ans.push_back(v);
        for (int i = ind; i < n; i++) {
            if (i > ind && nums[i] == nums[i - 1]) {
                continue;
            }
            v.push_back(nums[i]);
            allSubsets(i + 1, ans, v, nums, n);
            v.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> v;
        // int ind = 0;

        allSubsets(0, ans, v, nums, n);
        return ans;
    }
};
