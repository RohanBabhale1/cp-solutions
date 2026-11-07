class Solution {
public:
    bool canRemoveAll(vector<int>& types, vector<int>& colors, vector<int>& groupSize) {
        int n = types.size();
        vector<int>t, c, cnt;
        for (int i = 0; i < n; i++) {
            if (!t.empty() && t.back() == types[i] && c.back() == colors[i]) cnt.back()++;
            else {
                t.push_back(types[i]);
                c.push_back(colors[i]);
                cnt.push_back(1);
            }
            if (cnt.back() == groupSize[t.back()]) {
                t.pop_back();
                c.pop_back();
                cnt.pop_back();
            }
        }
        return t.empty();
    }
};
