class Solution {
    int directions[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

public:
    int closedIsland(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int count = 0;
        for(int r = 0; r < row; r++){
            for(int c = 0; c < col; c++){
                if(grid[r][c] == 0){
                    if(dfs(grid, r, c)){
                        count++;
                    }
                }
            }
        }
        return count;
    }

private:
    bool dfs(vector<vector<int>>& grid, int r, int c){
        if(r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size()){
            return false;
        }
        if(grid[r][c] == 1){
            return true;
        }
        grid[r][c] = 1;

        bool closed = true;

        for(int i = 0; i < 4; i++){
            bool result = dfs(grid,
                r + directions[i][0],
                c + directions[i][1]
            );

            closed = closed && result;
        }

        return closed;
    }
};
