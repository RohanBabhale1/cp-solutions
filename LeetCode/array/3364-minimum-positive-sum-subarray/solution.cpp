class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int minSum = INT_MAX;
        for (int k = l; k <= r; k++) {
            int currentSum = 0;
            for (int i = 0; i < k; i++) {
                currentSum += nums[i];
            }
            if (currentSum > 0) {
                minSum = min(minSum, currentSum);
            }
            for (int i = k; i < n; i++) {
                currentSum += nums[i] - nums[i - k];
                if (currentSum > 0) {
                    minSum = min(minSum, currentSum);
                }
            }
        }
        return (minSum == INT_MAX) ? -1 : minSum;
    }
};
