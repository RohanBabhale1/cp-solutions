class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        costs.insert(costs.begin(), 0);
        int a = 0, b = INT_MAX / 2, c = INT_MAX / 2, cur;
        for (int i = 1; i <= n; i++) {
            cur = costs[i] + min({a + 1, b + 4, c + 9});
            c = b;
            b = a;
            a = cur;
        }
        return cur;
    }
};
