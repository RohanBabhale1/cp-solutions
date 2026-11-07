class Solution {
public:
    long long countValidSubstrings(string s) {
        int n = s.size();
        long long ans = 0;
        int f1 = -1, f2 = -1, f3 = -1;
        for (int j = 0; j < n; j++) {
            if (s[j] == 'a') {
                f1 = j;
            } else if (s[j] == 'b') {
                f2 = f1;
            } else {
                f3 = f2;
            }
            ans += j - f3;
        }
        return ans;
    }
};
