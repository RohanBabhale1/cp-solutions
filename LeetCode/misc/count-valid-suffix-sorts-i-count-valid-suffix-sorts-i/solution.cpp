class Solution {
public:
    int countSuffix(vector<int>& nums, vector<int>& target) {
        int n = nums.size();
        vector<int> cnt(100001, 0);
        int diff = 0, ans = 0, f = 0;
        while (f < n && nums[f] == target[f]) f++;
        bool ok = true;
        for (int i = n - 1; i >= 0; i--) {
            if (i + 1 < n && target[i] < target[i + 1]) ok =false;
            if (!ok) break;
            int x = nums[i];
            if (cnt[x] == 0) diff++;
            cnt[x]++;
            if (cnt[x] == 0) diff--;
            int y =target[i];
            if (cnt[y] == 0) diff++;
            cnt[y]--;
            if (cnt[y] == 0) diff--;
            if (diff == 0 && i <= f) ans++;
        }
        return ans;
    }
};
