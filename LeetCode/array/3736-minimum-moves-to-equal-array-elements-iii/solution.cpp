class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans = 0;
        auto max_it = max_element(nums.begin(), nums.end());
        for (auto a: nums) {
            ans += (*max_it - a);
        }
        return ans;
    }
};
