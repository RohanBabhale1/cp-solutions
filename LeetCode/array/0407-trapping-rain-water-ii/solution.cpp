class Solution {
public:
    int trapRainWater(vector<vector<int>>& heightMap) {
        priority_queue<pair<int, pair<int, int>>,
                        vector<pair<int, pair<int, int>>>,
                        greater<pair<int, pair<int, int>>>>pq;
        int m = heightMap.size(), n = heightMap[0].size();
        if (m <=2 || n <= 2) return 0;
        vector<vector<int>>visited( m, vector<int>(n, 0));
        for (int i = 0; i < m; i++) {
            for (int j =0; j < n; j++) {
                if (i ==0 || i == m-1 || j == 0 || j == n-1) {
                    pq.push({heightMap[i][j], {i, j}});
                    visited[i][j] = 1;
                }
            }
        }
        int water = 0;
        int directions[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

        while (!pq.empty()) {
            auto [h, cell] = pq.top();
            pq.pop();
            for (auto& dir : directions){
                int cr = cell.first + dir[0];
                int cc = cell.second + dir[1];
                if (cr >= 0 && cr < m && cc >= 0 && cc <n && !visited[cr][cc]) {
                    visited[cr][cc] = 1;
                    water += max(0, h - heightMap[cr][cc]);
                    pq.push({max(h, heightMap[cr][cc]), {cr, cc}});


                }
            }
        }
        return water;
    }
};
