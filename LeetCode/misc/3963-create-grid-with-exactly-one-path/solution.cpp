class Solution {
public:
    vector<string> createGrid(int n, int m) {
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < m; i++)
            grid[0][i] = '.';
        for (int i = 0; i < n; i++)
            grid[i][m - 1] = '.';

        vector<string> ans;
        ans.reserve(n);
        for (int r = 0; r < n; r++) {
            ans.push_back(string(grid[r].begin(), grid[r].end()));
        }
        return ans;
    }
};
