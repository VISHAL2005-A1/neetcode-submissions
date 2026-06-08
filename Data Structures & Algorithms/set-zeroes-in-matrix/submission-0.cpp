class Solution {
   public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();

        vector<int> rows;
        vector<int> cols;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                if (matrix[i][j] == 0) {
                    rows.push_back(i);
                    cols.push_back(j);
                }
            }
        }
        for (auto& it : rows) {
            fill(matrix[it].begin(), matrix[it].end(), 0);
        }
        for (auto& it : cols) {
            for (int i = 0; i < n; i++) {
                matrix[i][it] = 0;
            }
        }
    }
};
