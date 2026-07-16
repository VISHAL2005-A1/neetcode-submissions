class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {

        int n = grid.size();

        if (grid[0][0] == 1 || grid[n - 1][n - 1] == 1)
            return -1;

        queue<pair<pair<int,int>,int>> q;

        q.push({{0,0},1});

        grid[0][0] = 1;   // mark visited

        int dr[8] = {-1,-1,-1,0,0,1,1,1};
        int dc[8] = {-1,0,1,-1,1,-1,0,1};

        while(!q.empty()){

            auto node = q.front();
            q.pop();

            int row = node.first.first;
            int col = node.first.second;
            int dist = node.second;

            if(row == n-1 && col == n-1)
                return dist;

            for(int i=0;i<8;i++){

                int nr = row + dr[i];
                int nc = col + dc[i];

                if(nr>=0 && nr<n &&
                   nc>=0 && nc<n &&
                   grid[nr][nc]==0){

                    grid[nr][nc]=1;
                    q.push({{nr,nc},dist+1});
                }
            }
        }

        return -1;
    }
};