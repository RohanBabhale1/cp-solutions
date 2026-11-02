class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        auto mid = nums.begin() + nums.size() / 2;
        int ans = 0;
        for (auto u: nums) {
            ans += abs(*mid - u);
        }
        return ans;
    }
};
