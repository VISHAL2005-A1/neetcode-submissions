class Solution {
public:
    void backtrack(int ind, vector<int>& candidates, int target,
                   vector<int>& path, vector<vector<int>>& ans) {

        // Found a valid combination
        if (target == 0) {
            ans.push_back(path);
            return;
        }

        for (int i = ind; i < candidates.size(); i++) {

            // Skip duplicates at the same recursion level
            if (i > ind && candidates[i] == candidates[i - 1])
                continue;

            // Since the array is sorted, no need to continue
            if (candidates[i] > target)
                break;

            // Choose
            path.push_back(candidates[i]);

            // Explore (move to next index because each element can be used only once)
            backtrack(i + 1, candidates, target - candidates[i], path, ans);

            // Undo choice (Backtrack)
            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        sort(candidates.begin(), candidates.end());

        vector<vector<int>> ans;
        vector<int> path;

        backtrack(0, candidates, target, path, ans);

        return ans;
    }
};