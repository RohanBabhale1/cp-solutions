class Solution {
public:
    long long minCost(int n, string colors, vector<vector<int>>& edges) {
        vector<vector<int>>g(n);
        for (auto& x :edges) g[x[0]].push_back(x[1]), g[x[1]].push_back(x[0]);
        vector<int>p(n,-1),o{0};
        for (int i =0; i< o.size(); i++) {
            for (int v : g[o[i]]){
                if (v != p[o[i]]) {
                    p[v] = o[i];
                    o.push_back(v);
                }
            }
        }
        vector<long long> s(n,1), a(n), b(n);
        long long m = 0, r = 0;
        for (int i = n - 1; i >= 0; i--) {
            int u = o[i];
            long long x =a[u] + (colors[u] == 'R' ? s[u] : 0), y = b[u] + (colors[u] == 'B' ? s[u] : 0);
            m = min( m, y - x);
            if (i) s[p[u]] += s[u], a[p[u]] += x, b[p[u]] += min(x, y);
            else r = x;
        }
        return r + m;
    }
};
