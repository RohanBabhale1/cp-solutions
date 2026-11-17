class Solution {
public:
    long long maxDifference(vector<int>& nums) {
        int n = nums.size();
        vector<long long> dp(n + 2, 0);
        for (int i = n - 1; i >= 0; i--) {
            long long a = nums[i];
            long long best = (a % 3 == 0) ? a - dp[i + 1] : a + dp[i + 1];
            if (i + 1 < n) {
                long long t = a + nums[i + 1];
                long long val = (t % 3 == 0) ? t - dp[i + 2] : t + dp[i + 2];
                best = max(best, val);
            }
            dp[i] = best;
        }
        return dp[0];
    }
};
