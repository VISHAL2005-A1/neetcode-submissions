class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        int m = grid.size();
        int n = grid[0].size();

        int dr[4] = {-1, 1, 0, 0};
        int dc[4] = {0, 0, -1, 1};

        int minutes = 0;

        while (true) {

            bool changed = false;

            // Mark new rotten oranges
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {

                    if (grid[i][j] == 2) {

                        for (int k = 0; k < 4; k++) {

                            int nr = i + dr[k];
                            int nc = j + dc[k];

                            if (nr >= 0 && nr < m &&
                                nc >= 0 && nc < n &&
                                grid[nr][nc] == 1) {

                                grid[nr][nc] = 3;
                                changed = true;
                            }
                        }
                    }
                }
            }

            if (!changed)
                break;

            // Convert 3 -> 2
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    if (grid[i][j] == 3)
                        grid[i][j] = 2;
                }
            }

            minutes++;
        }

        // Check if any fresh orange remains
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (grid[i][j] == 1)
                    return -1;

        return minutes;
    }
};