class Solution {
public:
    int minRange(int a, int b, int c) {
        int p =max({a,b,c}),q=min({a,b,c});
        return min(a+b+c-p-q,p-q);
    }
};
