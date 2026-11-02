class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int mid = nums.size()/2;
        int ans = 0;
        for (auto u: nums) {
            ans += abs(nums[mid] - u);
        }
        return ans;
    }
};
