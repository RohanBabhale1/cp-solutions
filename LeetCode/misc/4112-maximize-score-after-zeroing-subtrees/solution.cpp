class Solution {
public:
    int maxScore(vector<int>& parent, vector<int>& op, vector<int>& score) {
        int n = parent.size();
        vector<vector<int>> g(n);
        for (int i = 1; i < n; i++) g[parent[i]].push_back(i);
        vector<int> order;
        order.push_back(0);
        for (int i = 0; i < (int)order.size(); i++)
        for (int c : g[order[i]]) order.push_back(c);
        vector<long long> dp(n);
        for (int i = n - 1; i >= 0; i--) {
            int v = order[i];
            if (g[v].empty()) {
                dp[v] = score[v];
                continue;
            }
            long long sum = 0, mn = LLONG_MAX;
            for (int c : g[v]) {
                sum += dp[c];
                mn = min(mn, dp[c]);
            }
            if (op[v] == 0) mn = min(mn, 0LL);
            dp[v] = score[v] + sum - mn;
        }
        return dp[0];
    }
};
