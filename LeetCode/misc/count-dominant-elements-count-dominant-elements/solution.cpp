class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i=0;i<n;i++) {
            int sum = 0, cnt = 0;
            if (i > 0) {
                sum += nums[i - 1];
                cnt++;
            }
            if (i < n - 1) {
                sum += nums[i + 1];
                cnt++;
            }
            if (nums[i] * cnt >= sum) {
                ans++;
            }
        }
        return ans;
    }
};
