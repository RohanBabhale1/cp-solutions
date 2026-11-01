class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& locked, int k) {
        int n = nums.size();
        vector<int> need(n,0);
        int mx = 0;
        for (int i = 0; i < n - 1; i++) {
            mx =max(mx,nums[i]);
            if(mx != i + 1) need[i] = need[i+1] =1;
        }
        int c = 0;
        for (int i=0; i < n; i++) {
            if (need[i] && locked[i]) c++;
        }
        if (c > k) return -1;
        int ans = c;
        for (int j = 0; j < n; j++) {
            for (int i = j + 1; i < n; i++) {
                if (nums[j] > nums[i]) ans++;
            }
        }
        return ans;
    }
};
