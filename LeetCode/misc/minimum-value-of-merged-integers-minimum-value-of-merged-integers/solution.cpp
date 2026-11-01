class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;
        for (int i = 0; i < n; i += 2) {
            int x = nums[i];
            int y = nums[i + 1];
            int p = 1;
            while (p <= y) {
                p *= 10;
            }
            ans = min(ans, x * p + y);
        }
        return ans;
    }
};
