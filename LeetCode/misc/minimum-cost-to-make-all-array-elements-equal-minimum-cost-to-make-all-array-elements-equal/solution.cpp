class Solution {
public:
    long long minCost(vector<int>& nums) {
        using ll = long long;
        int n = nums.size();
        ll ans = LLONG_MAX;
        int i = 0;
        while (i < n) {
            int j = i;
            while (j < n && nums[j] == nums[i]) {
                j++;
            }
            int len = j - i;
            if (len == n) {
                return 0;
            }
            if ((i > 0 && j < n) || len >= 2) {
                ans = min(ans, (ll)nums[i] * (n - len));
            }
            i = j;
        }
        return ans;
    }
};
