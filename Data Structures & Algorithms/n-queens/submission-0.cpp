class Solution {
public:
    bool isSafe(vector<string>& board, int row, int col, int n) {

        // Horizontal Safe
        // for (int i = 0; i < n; i++) {
        //     if (board[row][i] == 'Q') {
        //         return false;
        //     }
        // }
        // Vertical Safe
        for (int i = 0; i < n; i++) {
            if (board[i][col] == 'Q') {
                return false;
            }
        }
        // Diagonal Left
        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }
        // Diagonal Right
        for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }
        return true;
    }

    void myQueens(vector<string>& board, vector<vector<string>>& ans, int row,int n) 
    {
        if (row == n) {
            ans.push_back({board});
            return;
        }

        for (int j = 0; j < n; j++) {
            if (isSafe(board, row, j, n)) {
                board[row][j] = 'Q';
                myQueens(board, ans, row + 1, n);
                board[row][j] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        vector<vector<string>> ans;

        myQueens(board, ans, 0, n);
        return ans;
    }
};