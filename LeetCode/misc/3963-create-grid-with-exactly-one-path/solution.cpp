class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<vector<char>> grid(m, vector<char>(n, '#'));
        
        int i = 0;
        int j = 0; 
        int c = 0;
        
        while (i < m && j < n) {
            grid[i][j] = '.';
            
            if (i == m - 1 && j == n - 1) {
                break;
            }
            
            if (c % 2 == 0) {
                if (j + 1 < n) {
                    j += 1;
                } else {
                    i += 1;
                }
            } else {
                if (i + 1 < m) {
                    i += 1;
                } else {
                    j += 1;
                }
            }
            c++; 
        }
        
        vector<string> ans;
        ans.reserve(m);
        for (int r = 0; r < m; r++) {
            ans.push_back(string(grid[r].begin(), grid[r].end()));
        }
        
        return ans;
    }
};
