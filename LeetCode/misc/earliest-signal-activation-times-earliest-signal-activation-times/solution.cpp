class Solution {
public:
    vector<long long> earliestActivationTimes(int n, vector<vector<int>>& edges, vector<int>& requiredSignals) {
        vector<vector<pair<int, int>>> g(n);
        for (auto &e : edges) {
            g[e[0]].push_back({e[1], e[2]});
        }
        vector<long long> ans(n, -1);
        vector<int> cnt(n, 0);
        requiredSignals[0] = 1;
        priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> pq;
        pq.push({0, 0});
        while (!pq.empty()) {
            pair<long long, long long> cur = pq.top();
            pq.pop();
            long long t = cur.first;
            int v = cur.second;
            if (ans[v] != -1) {
                continue;
            }
            cnt[v]++;
            if (cnt[v] == requiredSignals[v]) {
                ans[v] = t;
                for (auto &e : g[v]) {
                    pq.push({t + e.second, e.first});
                }
            }
        }
        return ans;
    }
};
