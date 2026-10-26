class Solution {
inline static const int directions[4][2]={{1,0}, {-1,0},{0,1},{0,-1}};
int row, col;
typedef long long ll;
public:
    int countIslands(vector<vector<int>>& grid, int k) {
        row = grid.size(), col = grid[0].size();
        int count = 0;
        ll sum;
        for ( int r = 0; r < row; r++ ) {
            for ( int c = 0; c < col; c++ ){
                if ( grid[r][c]) {
                    sum = 0;
                    dfs( grid, r, c , sum );
                    if ( sum % k == 0 ) {
                        count++;
                    }
                }
            }
        }
        return count;
    }

private:
    void dfs(vector<vector<int>>&grid,int r, int c,ll &sum ){
        if ( r >= row || c >= col || r < 0 || c < 0 || grid[r][c]==0 ){
            return ;
        }

        sum += grid[r][c];
        
        grid[r][c] = 0;
        
        for ( int i = 0; i < 4; i++ ){
            dfs( grid, r + directions[i][0] , c + directions[i][1], sum );
        }
        
    }
};
