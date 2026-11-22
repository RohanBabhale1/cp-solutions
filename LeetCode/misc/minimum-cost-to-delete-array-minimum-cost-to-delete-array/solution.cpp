class Solution {
public:
    long long minCost(vector<int>& nums) {
        int n = nums.size();
        long long ans = (long long)nums[0] + nums[n - 1];
        vector<long long> b(nums.begin() + 1, nums.end() - 1);
        sort(b.begin(), b.end());
        for (int i = 0; i + 1 < (int)b.size(); i += 2) {
            if (b[i] + b[i + 1] >= 0) {
                break;
            }
            ans += b[i] + b[i + 1];
        }
        return ans;
    }
};
