class Solution {
    int directions[2][2] = {{0, 1}, {1, 0}};
    const int MOD = 1e9 + 7;

public:
    int uniquePaths(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();

        vector<vector<int>> right(row, vector<int>(col, 0));
        vector<vector<int>> down(row, vector<int>(col, 0));

        // Starting cell can send one path in either direction
        right[0][0] = 1;
        down[0][0] = 1;

        for (int r = 0; r < row; r++) {
            for (int c = 0; c < col; c++) {

                if (r == 0 && c == 0)
                    continue;

                int left = 0;
                int top = 0;

                // Paths coming from the left
                if (c > 0)
                    left = right[r - directions[0][0]]
                                [c - directions[0][1]];

                // Paths coming from the top
                if (r > 0)
                    top = down[r - directions[1][0]]
                               [c - directions[1][1]];

                if (grid[r][c] == 0) {
                    right[r][c] = (left + top) % MOD;
                    down[r][c] = (left + top) % MOD;
                }
                else {
                    // Mirror: right becomes down, down becomes right
                    right[r][c] = top;
                    down[r][c] = left;
                }
            }
        }

        return right[row - 1][col - 1];
    }
};
